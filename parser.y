/* ===== Definition Section ===== */

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include "symboltable.h"
int tokens = 0, error = 0;
static int linenumber = 1;
int cur_scope = 0;
int is_nt_func = 0;
int tmp_array_dim = 0;
int last_array_num = 0;
int ifnum = 0;
int m = 1;
int param_num = 0;
int isif = 0;
int ifnumbegin = 0;
int allLabel[256];
int temp_place = 8;
int fp_pos = 0;
char pt13lula[665];
enum all_type cur_type, fn_return_type;

struct var_type{
    ptr p;  		//pointer to symbol table entry
    int arrayoffset;
};
struct const_type{
  int con_type;		/*0: Int, 1: Float, -1: String*/
  int place;
  union {
    int ival;
    float fval;
    char *sc;
  } const_u;
};
struct f_l{	//To get details of function arguments.
    char name[256];
    int func_list_num;
    int func_arg_type[256];
    enum all_type nt_type;
    int place;
    int is_lib_func;
    int arrayoffset;
};
%}

%union{
  struct var_type *variable;
  enum all_type nt_type;
  int num;
  struct const_type *con_pt;	/*Constant*/
  struct f_l func_list;
}

%token <variable> ID
%token <con_pt> CONST
%token <variable> COMMENT
%token VOID
%token INT
%token FLOAT
%token IF
%token ELSE
%token WHILE
%token FOR
%token STRUCT
%token TYPEDEF
%token OP_ASSIGN
%token OP_OR
%token OP_AND
%token OP_NOT
%token OP_EQ
%token OP_NE
%token OP_GT
%token OP_LT
%token OP_GE
%token OP_LE
%token OP_PLUS
%token OP_MINUS
%token OP_TIMES
%token OP_DIVIDE
%token MK_LB
%token MK_RB
%token MK_LPAREN
%token MK_RPAREN
%token MK_LBRACE
%token MK_RBRACE
%token MK_COMMA
%token MK_SEMICOLON
%token MK_DOT
%token ERROR
%token RETURN

%type <num> dim_fn dimfn1 param
%type <func_list> param_list dim
%type <func_list> relop_expr_list nonempty_relop_expr_list relop_expr relop_term relop_factor
%type <func_list> expr term factor dim_decl cexpr mcexpr cfactor ifbegin whilebegin forbegin
%type <nt_type> type
//%type <nt_type> relop_expr_list nonempty_relop_expr_list relop_expr relop_term relop_factor
//%type <nt_type> expr term factor dim_decl cexpr mcexpr cfactor type
%type <variable> var_ref mul_op add_op rel_op
%type <variable> init_id

%start program

%%

/* ==== Grammar Section ==== */

/* Productions */               /* Semantic actions */
program		: global_decl_list

    ;

global_decl_list: global_decl_list global_decl
                |

		;

global_decl	: decl_list function_decl
		| function_decl
    ;



/*Vineeth: Scoping rule is not correct!*/
function_decl	: type ID MK_LPAREN param_list MK_RPAREN MK_LBRACE {param_num = 0;generateFuncio($2->p->id);cur_scope++;

  } block {cleanup_symtab(cur_scope);cur_scope--;} MK_RBRACE
	{
//	printf("func_defn_x: %s, decl: %d, num: %d\n", $2->p->id, $2->p->arg_num, $4.func_list_num);
	if(($1 != $2->p->return_type) && ($2->p->is_lib_func == 0) && ($2->p->type == type_func)) {	/*Comparing with declaration.*/
		printf("Decl: Incompatible return type. Fn = %s\n", $2->p->id);
		error = 1;
	}
	if(($2->p->arg_num != $4.func_list_num) && ($2->p->is_lib_func == 0) && ($2->p->type == type_func)) {
		if($2->p->arg_num < $4.func_list_num)
			printf("func_defn_x: too many arguments in function (%s)\n", $2->p->id);
		else
			printf("func_defn_x: too few arguments in function (%s)\n", $2->p->id);
		error = 1;	/*Set Error Flag.*/
	}
	if($1 != fn_return_type) {		/*Comparing with return type from function body.*/
		printf("Block: Incompatible return type. Fn = %s\n", $2->p->id);
//		printf("fn_return_type = %d, p->return_type = %d, type = %d.\n", fn_return_type, $2->p->return_type, $1);

		error = 1;
	}

	check_func_details($2, $4);
  endFuncio($2->p->id);

	}
//Vineeth: Function declarations. The above ones are function definitions
		| type ID MK_LPAREN param_list MK_RPAREN MK_SEMICOLON /*Scope = 0 and populating function parameters*/
	{
		$2->p->return_type = $1;
		$2->p->type = type_func;
		$2->p->arg_num = $4.func_list_num;

		copy_func_details($2, $4);
/*
		for(int i = 1; i <= $4.func_list_num; i++) {
			$1.func_dim_list[i] = $4.func_arg_type[i];
			printf("func_decl: func_dim_list = %d\n", $1.func_dim_list[i]);
		}
*/
//		printf("func_decl: func_dim_list = %d\n", $2->p->func_dim_list[1]);
//		printf("func_decl: func_dim_list = %d\n", $2->p->func_dim_list[2]);
/*
		printf("Function decl: %s\t\t", $2->p->id);
		printf("Return type: %d\t\t", $2->p->return_type);
		printf("Param # = %d\n", $4);
*/
	}
		;

param_list	: param_list MK_COMMA param
	{
		$$.func_list_num = $1.func_list_num + 1;
		$$.func_arg_type[$$.func_list_num] = $3;	//Populating dimension for each function argument.
//		printf("param_list_1: func_list_num = %d, func_arg_type = %d.\n", $$.func_list_num, $$.func_arg_type[$$.func_list_num]);
	}
		| param
	{
		$$.func_list_num = 1;
		$$.func_arg_type[$$.func_list_num] = $1;	//Populating dimension for each function argument.

//		printf("param_list_2: func_list_num = %d, func_arg_type = %d.\n", $$.func_list_num, $$.func_arg_type[$$.func_list_num]);
	}
		| {$$.func_list_num = 0;}		/*To avoid two productions for function decl and defn.*/
		;

param		: type ID
	{
		$2->p->scope = 1;
    int aux = insert_inRegister($2->p->id);
    char buf[20]; sprintf(buf, "  move $%d, $a%d\n", aux, param_num++);//emit(buf);
    //char* kth23 = "Hello";pt13lula
    //char dest[12];

    //strcpy( dest, kth23 );
    strcat( pt13lula, buf );
		$2->p->type = $1;
		$2->p->first_time = 0;
//		printf("param: scope = 1 for ID %s\n", $2->p->id);
		$$ = 0;			//Passing 0 as it's not an array, it's a scalar.
//		printf("param: scope = 1 for ID %s, array_dim = %d.\n", $2->p->id, $$);
	}
		| struct_type ID
		| type ID dim_fn
	{
		$2->p->scope = 1;
		$2->p->type = $1;
		$2->p->first_time = 0;
		//printf("param: scope = 1 for ID %s\n", $2->p->id);
		$$ = $3;		//Passing on array dimensions.
    //		printf("param: scope = 1 for ID %s, array_dim = %d.\n", $2->p->id, $$);
	}
		| struct_type ID dim_fn
		;
dim_fn		:MK_LB expr_null MK_RB dimfn1 {$$ = $4 + 1;}
		;
dimfn1		:MK_LB expr MK_RB dimfn1 {$$ = $4 + 1;}
		| {$$ = 0;}
		;
expr_null	:expr
		|
		;

block           : decl_list stmt_list
                | stmt_list
                | decl_list
                |
                ;

decl_list	: decl_list decl
		| decl
		;

decl		: type_decl
		| var_decl
		;

type_decl 	: TYPEDEF type id_list MK_SEMICOLON
		| TYPEDEF VOID id_list MK_SEMICOLON
		| TYPEDEF struct_type id_list MK_SEMICOLON
		| struct_type MK_SEMICOLON
		;

var_decl	: type init_id_list MK_SEMICOLON
		/*Struct?*/
		| struct_type id_list MK_SEMICOLON
		/*Typedef?*/
		| ID id_list MK_SEMICOLON
		;

/*What types do we support? */
/* Vineeth: Suppported types. */
type		: INT   {$$ = type_int; cur_type=type_int;}	/*{cur_type=type_int;}*/
		| FLOAT {$$ = type_float; cur_type=type_float;}	/*{cur_type=type_float;}*/
		| VOID  {$$ = type_void; cur_type=type_void;}	/*{cur_type=type_void;}*/
		;

struct_type	: STRUCT tag
		;

/*Vineeth: Struct variable body. */
tag		: ID MK_LBRACE {cur_scope++;} decl_list {cleanup_symtab(cur_scope); cur_scope--;} MK_RBRACE
		| MK_LBRACE {cur_scope++;} decl_list {cleanup_symtab(cur_scope); cur_scope--;} MK_RBRACE
		| ID MK_LBRACE MK_RBRACE
		| MK_LBRACE MK_RBRACE
		| ID
		;


id_list		: ID
		| id_list MK_COMMA ID
		| id_list MK_COMMA ID dim_decl
{
	printf("id_list_3: #dims = %d\n", $4);		/*Array? When is this used?*/
}
		| ID dim_decl
{
	printf("id_list_4: #dims = %d\n", $2);		/*Array? When is this used?*/
}
		;
dim_decl	: MK_LB cexpr MK_RB
	{
//VM		$$ = 1;			/*Dimension count.*/
		$$.func_list_num = 1;				/*Argument count.*/
    $$.place = $2.place;
    //printf("place:%d", $2.place); //el par
//		$$.func_arg_type[$$.func_list_num] = 1;		/*Dimension count.*/
//VM		if($2 != type_int) {		/*Dimension type check.*/
		if($2.nt_type != type_int) {		/*Dimension type check.*/
			printf("dim_decl_1: Array subscript is not an integer.\n");
//			printf("dim_decl_1: cexpr = %d\n", $2);
			error = 1;
		}

	}
		| dim_decl MK_LB cexpr MK_RB
	{
//VM		$$ = $1 + 1;		/*Dimension count.*/
		$$.func_list_num = $1.func_list_num + 1;					/*Argument count.*/
    //printf("func_listnum:%d\n", $3.place);
    $$.place = $1.place * $3.place;
//		$$.func_arg_type[$$.func_list_num] = $$.func_arg_type[$$.func_list_num] + 1;	/*Dimension count.*/
//VM		if($3 != type_int) {		/*Dimension type check.*/
		if($3.nt_type != type_int) {		/*Dimension type check.*/
			printf("dim_decl_1: Array subscript is not an integer.\n");
//			printf("dim_decl_1: cexpr = %d\n", $3);
			error = 1;
		}
	}
		;
cexpr		: cexpr add_op mcexpr
		| mcexpr {$$.nt_type = $1.nt_type; $$.place = $1.place;}
		;
mcexpr		: mcexpr mul_op cfactor
		| cfactor {$$.nt_type = $1.nt_type; $$.place = $1.place;}
		;
cfactor:	CONST {$$.nt_type = $1->con_type; $$.place = $1->const_u.ival;}
		| MK_LPAREN cexpr MK_RPAREN
		;

init_id_list	: init_id
		| init_id_list MK_COMMA init_id
		;

init_id		: ID
	{
		if($1->p->first_time==0) {
                	printf("ID (%s) redeclared\n",$1->p->id);
			error = 1;
		}
                else  {//ID being seen for the first time
                fp_pos -= 4;
                $1->p->stkPos = fp_pos;
                      	$1->p->first_time=0;
                        $$ = $1;

//			printf("init_id_1: id seen for first time.\n");
		}
                  $1->p->type=cur_type;
	/*Variable declaration upgraded?*/
/*
                  printf("Scope: %d - %s is of type ", cur_scope, $1->p->id);
                  if($1->p->type==type_int)
                      printf("int\n");
                  if($1->p->type==type_float)
                      printf("float\n");
*/
        }
		/*Array declared here. Alone??*/
		| ID dim_decl
	{
		if($1->p->first_time==0) {
                	printf("ID (%s) redeclared\n",$1->p->id);
			error = 1;
		}
                else  //ID being seen for the first time
                	$1->p->first_time=0;
                $1->p->type=cur_type;
	/*Variable declaration upgraded?*/
/*
                  printf("Scope: %d - %s is of type ", cur_scope, $1->p->id);
                  if($1->p->type==type_int)
                      printf("int\n");
                  if($1->p->type==type_float)
                      printf("float\n");
*/
	$1->p->is_array = 1;

	$1->p->array_dim = $2.func_list_num;
  //printf("arraysize:%d\n", $2.place);
  insertArray($1->p->id, $2.place);
	}
		| ID OP_ASSIGN relop_expr
	{

  //printf("%s ------\n" , $1->p->id);
  fp_pos -= 4;
  $1->p->stkPos = fp_pos;
  if($1->p->scope != 0 && $1->p->is_array == 0){
    if($3.place != type_func && !$3.is_lib_func){
      char buf[20];
      sprintf(buf, "  sw $%d, %d($fp)", $3.place, $1->p->stkPos);
      emit(buf);
      delete_inregister($3.place);
    }
  }

                if($1->p->first_time==0) {
                 	printf("ID (%s) redeclared\n",$1->p->id);
			error = 1;
		}
               	else{  //ID being seen for the first time
                	$1->p->first_time=0;

                }
               	$1->p->type=cur_type;
                //printf("%s\n", $1->p->id); //$$ = $1;

	/*Variable declaration upgraded?*/
/*
                  printf("Scope: %d - %s is of type ", cur_scope, $1->p->id);
                  if($1->p->type==type_int)
                      printf("int\n");
                  if($1->p->type==type_float)
                      printf("float\n");
*/
        }
		;

ifbegin: IF {isif = 1; char buf[20];sprintf(buf,"test%d:", ifnum);emit(buf);}MK_LPAREN relop_expr
            {isif = 0; $$.place = ifnum; ifnum++;}
      ;

whilebegin: WHILE {$$.place = ifnum; char buf[20];sprintf(buf,"test%d:", ifnum);emit(buf); isif = 1;}
      ;

forbegin: FOR MK_LPAREN assign_expr_list MK_SEMICOLON {$$.place = ifnum;

   char buf[20];sprintf(buf,"test%d:", ifnum);emit(buf); isif = 1;}
      ;

stmt_list	: stmt_list stmt
		| stmt
		;

stmt		: MK_LBRACE {cur_scope++;} block {cleanup_symtab(cur_scope);cur_scope--;} MK_RBRACE
/*Vineeth: Addition for stmt like while(), if() etc.*/
		/* | While Statement here */
		| whilebegin MK_LPAREN relop_expr_list
    {ifnum++; isif = 0;}MK_RPAREN stmt
    {char buf[20];sprintf(buf,"  j test%d", $1.place);emit(buf);}{char buf[20];sprintf(buf,"lexit%d:", $1.place);emit(buf);}
	  | forbegin relop_expr_list
     {isif = 0; ifnum++;
      char bufd[20];sprintf(bufd,"  j body%d", $1.place);emit(bufd);
      {char buff[20];sprintf(buff,"inc%d:", $1.place);emit(buff);}
    }
     MK_SEMICOLON assign_expr_list
     {char buf[20];sprintf(buf,"  j test%d", $1.place);emit(buf);}
     MK_RPAREN {char buf[20];sprintf(buf,"body%d:", $1.place);emit(buf);}
     stmt
     {char buf[20];sprintf(buf,"  j inc%d", $1.place);emit(buf);
     char buff[20];sprintf(buff,"lexit%d:", $1.place);emit(buff);}
		/* | If then else here */
		| ifbegin MK_RPAREN stmt {char buf[20];sprintf(buf,"  j lexit%d", $1.place); emit(buf);}ELSE {char buf[20];sprintf(buf,"lelse%d:", $1.place);emit(buf);} stmt
    //exit ifelse
      {char buf[20];sprintf(buf,"lexit%d:", $1.place);emit(buf);}
		/* | If statement here */
		| ifbegin MK_RPAREN stmt {
        //endif
        char buf[20];sprintf(buf,"lelse%d:", $1.place);emit(buf);
    }
		/* | read and write library calls -- note that read/write are not keywords */
		| ID MK_LPAREN relop_expr_list MK_RPAREN	/*Function calls: need to check parameter number, type and return types.*/
	{
	//printf("func_call-stmt: %s, decl: %d, num: %d\n", $1->p->id, $1->p->arg_num, $3.func_list_num);
  //printf("func_call-stmt: %s, decl: %s, %d\n", $1->p->id, $3.name, $3.place);

//	print_func_details($3);

//Argument # check.
	if(($1->p->arg_num != $3.func_list_num) && ($1->p->is_lib_func == 0) && ($1->p->type == type_func)) {
		if($1->p->arg_num < $3.func_list_num)
			printf("func_call-stmt: too many arguments in function (%s)\n", $1->p->id);
		else
			printf("func_call-stmt: too few arguments in function (%s)\n", $1->p->id);

		error = 1;		/*Set Error Flag.*/
	}

//Scalar or Pointer?
//	ptr p=lookup($3.name, 1);



	}
		| var_ref OP_ASSIGN relop_expr MK_SEMICOLON
	{				/*Function return type comparison goes here?*/
  if($1->p->type == type_int && $3.place < 32){ // integer miguel
    if($1->p->scope != 0 && $1->p->is_array == 0){
      if($3.is_lib_func){
        char buf[20]; sprintf(buf, "  li $v0, 5");emit(buf);
        char buff[20]; sprintf(buff, "  syscall");emit(buff);
        char bufff[20]; sprintf(bufff, "  sw $v0, %d($fp)", $1->p->stkPos);emit(bufff);
      }else if ($3.place == type_func){
        char buf[20]; sprintf(buf, "  move $%d, $v0", insert_inRegister($1->p->id));emit(buf);

      }else{
        char buf[20]; sprintf(buf, "  sw $%d, %d($fp)", $3.place, $1->p->stkPos);emit(buf);
        delete_inregister($3.place);
      }
    }else if($1->p->is_array == 1){
      char buff[20];
      sprintf(buff, "%d", $1->arrayoffset);
      char buf[20]; sprintf(buf, "  sw $%d, _%s($%d)", $3.place, $1->p->id, find_inRegister(buff));
      emit(buf);
      delete_inregister($3.place);
      delete_inregister(temp_place);
    }else{

      char buf[20]; sprintf(buf, "  sw $%d, _%s", $3.place, $1->p->id);emit(buf);
      delete_inregister($3.place);
    }
  }else{ //float
    if($1->p->scope != 0){
      char buf[20]; sprintf(buf, "  s.s $f%d, %d($fp)", $3.place - 32, $1->p->stkPos);emit(buf);
      delete_inregister($3.place);
    }else{
      char buf[20]; sprintf(buf, "  s.s $f%d, _%s", $3.place, $1->p->id);emit(buf);
      delete_inregister($3.place);
    }
  }

//		printf("stmt: ID = %s, type = %d, return_type = %d\n", $1->p->id, $1->p->type, $3);
		if($1->p->type != $3.nt_type && (is_nt_func == 1)) {
			printf("ID = %s : Incompatible return types\n", $1->p->id);
			error = 1;	/*Set Error Flag.*/
		}
		is_nt_func = 0;		/*Reset flag so that non functions are not checked for return type*/
			/*Need to handle read (int) and fread (float).*/
	}
		| relop_expr_list MK_SEMICOLON
		| MK_SEMICOLON
		| RETURN MK_SEMICOLON			/*Cross check return type.*/
	{
		fn_return_type = type_void;
	}
		| RETURN relop_expr MK_SEMICOLON	/*Cross check return type.*/
	{
		fn_return_type = $2.nt_type;
    char buf[20]; sprintf(buf, "  move $v0, $%d", $2.place);emit(buf);
	}
		;

assign_expr_list : nonempty_assign_expr_list
                |
                ;

nonempty_assign_expr_list        : nonempty_assign_expr_list MK_COMMA assign_expr
                | assign_expr

assign_expr     : ID OP_ASSIGN relop_expr
{
  //char bufff[20]; sprintf(bufff, "  sw $v0, %d($fp)", $1->p->stkPos);emit(bufff);
  char buf[20];
  sprintf(buf, "  sw $%d, %d($fp)", $3.place, $1->p->stkPos);
  emit(buf);
  delete_inregister($3.place);
}

                | relop_expr
                ;
relop_expr	: relop_term
	{
		$$ = $1;strcpy($$.name, $1.name);;
//		printf("relop_expr: array arg # = %d.\n", $$.func_list_num);
//printf("%s\n" , $1.name);
	}
		| relop_expr OP_OR relop_term {$$ = $1;strcpy($$.name, $1.name);

    }
		;

relop_term	: relop_factor  {
    $$ = $1;strcpy($$.name, $1.name);
    if(isif){
      char buff[20];sprintf(buff,"  beqz $%d, lelse%d", $1.place, ifnum);emit(buff);
    }
    }//

    | relop_term OP_AND relop_factor {
      $$ = $3;strcpy($$.name, $3.name);
      if(isif){
        char buff[20];sprintf(buff,"  beqz $%d, lelse%d", $3.place, ifnum);emit(buff);
      }
      }//printf("%d:" , $1.place);printf("%d\n" , $3.place);

		;

relop_factor	: expr {$$ = $1;strcpy($$.name, $1.name);}//printf("%s\n" , $1.name);
		| expr rel_op expr {int auxplace;int buf [20]; int bugg[20];
       sprintf(bugg, "%s,%d,%d", $2,$1.place, $3.place);
       auxplace = insert_inRegister(bugg);
       sprintf(buf,"  %s $%d, $%d, $%d", $2,auxplace, $1.place, $3.place);
       emit(buf);$$.place = auxplace;
       if(isif){
         //char buff[20];sprintf(buff,"  beqz $%d, lelse%d", auxplace, ifnum);emit(buff);
       }
      strcpy($$.name, $1.name);
      }
		;

/* what relation operators do we support ? */
/*Vineeth: Relational operators added.*/
rel_op		: OP_LT {$$ = "slt";}
		| OP_LE {$$ = "sle";}
		| OP_GT {$$ = "sgt";}
		| OP_GE {$$ = "sge";}
		| OP_EQ {$$ = "seq";}
		| OP_NE {$$ = "sne";}
		;

relop_expr_list	: nonempty_relop_expr_list {$$ = $1;}
		| {$$.func_list_num = 0;}		/*For function parameter number?*/	//PROBLEM???
		;

nonempty_relop_expr_list	: nonempty_relop_expr_list MK_COMMA relop_expr
	{
		$$.func_list_num = $1.func_list_num + 1;
		$$.func_arg_type[$$.func_list_num] = $3.func_list_num;
		strcpy($$.name, $3.name);
    //printf("aqui:%s\n", $3.name);
    if(find_inRegister($3.name) && $1.func_list_num <=4){
      char buf[20];
      sprintf(buf, "  move $a%d, $%d", $1.func_list_num,insert_inRegister($3.name));
      emit(buf);
    }else{
      char buf[20];
      sprintf(buf, "  move $a%d, $%d", $1.func_list_num, temp_place);
      emit(buf);
    }
		//printf("nonempty_relop_expr_list_1: name = %s, arg # = %d, array dim# = %d & %d.\n", $$.name, $$.func_list_num, $$.func_arg_type[1], $$.func_arg_type[2]);
//Scalar or Pointer?
/*

		ptr p=lookup($3.name, 1);
		if(p->array_dim == 0) {
			if(p->array_dim != $3.func_list_num) {
				printf("nonempty_relop_expr_list_1: Scalar Issue.\n");
				error = 1;
			}
		}

*/
	}
		| relop_expr
	{					/*For function parameter number?*/ //PROBLEM???
    if(find_inRegister($1.name)){
      char buf[20];
      sprintf(buf, "  move $a0, $%d", insert_inRegister($1.name));
      emit(buf);
    }

		$$.func_list_num = 1;
		$$.func_arg_type[$$.func_list_num] = $1.func_list_num;
		strcpy($$.name, $1.name);
//		printf("nonempty_relop_expr_list_2: name = %s, arg # = %d, array dim# = %d & %d.\n", $$.name, $$.func_list_num, $$.func_arg_type[1], $$.func_arg_type[2]);
	}
		;

expr		: expr add_op term {temp_place = insert_inRegister($1.name);
                              char buf[20];
                             if(temp_place < 32){
                               sprintf(buf, "  %s $%d, $%d, $%d ", $2, temp_place, $1.place, $3.place);

                             }else{
                               if($2 == "add"){
                                 sprintf(buf, "  add.s $f%d, $f%d, $%d ", temp_place-32, $1.place-32, $3.place);

                               }else{
                                 sprintf(buf, "  sub.s $f%d, $f%d, $%d ", temp_place-32, $1.place-32, $3.place);

                               }
                             }
                             emit(buf);
                             $$ = $1;
                             $$.place = temp_place; }
		| term
	{

		$$ = $1;
		//printf("expr:%s\n", $1.name);

	}	/*For function return type?*/
		;

add_op		: OP_PLUS {$$ = "add";}
		| OP_MINUS {$$ = "sub";}
		;

term		: term mul_op factor {temp_place = insert_inRegister($1.name);
                              char buf[20];
                              if(temp_place < 32){
                                sprintf(buf, "  %s $%d, $%d, $%d", $2, temp_place, $1.place, $3.place);
                                emit(buf);
                              }else{
                                if($2 == "mul"){
                                  sprintf(buf, "  mul.s $f%d, $f%d, $%d", temp_place - 32, $1.place - 32, $3.place);
                                  emit(buf);
                                }else{
                                  sprintf(buf, "  div.s $f%d, $f%d, $%d", temp_place - 32, $1.place -32, $3.place);
                                  emit(buf);
                                }
                              }

                              strcpy($$.name, $1.name);
                              $$.place = temp_place;

                              }	//
		| factor
		{$$ = $1;


    strcpy($$.name, $1.name);
    }
    ;

mul_op		: OP_TIMES {$$ = "mul";}
		| OP_DIVIDE {$$ = "div";}
		;

factor		: MK_LPAREN relop_expr MK_RPAREN		/*How to check Array subscript?*/
		/* | -(<relop_expr>) */
		| OP_NOT MK_LPAREN relop_expr MK_RPAREN		/*How to check Array subscript?*/
/*Vineeth: OP_MINUS condition added as C could have a condition like:
 	"if(-(i < 10))".	*/
		| OP_MINUS MK_LPAREN relop_expr MK_RPAREN	/*How to check Array subscript?*/
		| CONST {$$.nt_type = $1->con_type; $$.arrayoffset = $1->const_u.ival;
    char na[256];
    sprintf(na, "%d", $1->const_u.ival);

    if(!find_inRegister(na)){
      if($1->con_type != -1){
        if($1->const_u.ival){
          $1->place = insert_inRegister(na);
          char buf[20];
          sprintf(buf, "  li $%d, %d", $1->place, $1->const_u.ival);
          emit(buf);
        }else{
          $1->place = 0;
        }
      }else{
        $1->place = insert_inRegister(na);
        char buff[20];
        sprintf(buff, "  li $v0, 4");
        emit(buff);
        char buf[20];
        strcpy(strings[m], $1->const_u.sc);
        sprintf(buf, "  la $a0, m%d", m++);
        emit(buf);
        char bufff[20];
        sprintf(bufff, "  syscall");
        emit(bufff);
      }
    }else{
      $1->place = insert_inRegister(na);
    }
    //printf("id:%d place:%d\n ", $1->const_u.ival,$1->place);
    $$.place = $1->place;}		/*Checking Array subscript.*/
	//{printf("ID: %d\n", $1->const_u.ival);}
		/* | - constant, here - is an Unary operator */
		| OP_NOT CONST {$$.nt_type = $2->con_type;}	/*Checking Array subscript.*/
//Vineeth: OP_MINUS condition added as C could have a condition like: "if(-10)".
		| OP_MINUS CONST {$$.nt_type = $2->con_type;}	/*Checking Array subscript.*/
		| ID MK_LPAREN relop_expr_list MK_RPAREN
		/* | - func ( <relop_expr_list> ) */
{
	printf("func_call-factor: %s, decl: %d, num: %d\n", $1->p->id, $1->p->arg_num, $3.func_list_num);

	print_func_details($3);

	if(($1->p->arg_num != $3.func_list_num) && ($1->p->is_lib_func == 0) && ($1->p->type == type_func)) {
		if($1->p->arg_num < $3.func_list_num)
			printf("func_call-factor: too many arguments in function (%s)\n", $1->p->id);
		else
			printf("func_call-factor: too few arguments in function (%s)\n", $1->p->id);
		error = 1;	/*Set Error Flag.*/
	}
//	printf("factor: ID type - %d\n", $1->p->type);
	if($1->p->type == type_func) {
		is_nt_func = 1;		/*Set flint vector[3];ag so that only functions are checked for return type.*/
		if(!strcmp($1->p->id, "read")) {
			$1->p->return_type = type_int;
//			printf("read() function\n");
		}
		if(!strcmp($1->p->id, "fread")) {
			$1->p->return_type = type_float;
//			printf("fread() function\n");
		}
	}
	$$.nt_type = $1->p->return_type;	/*Function return type passed to factor.*/


  if(!strcmp($1->p->id,"read") || !strcmp($1->p->id,"write")){
    $$.is_lib_func = 1;

  }else{
    $$.place = type_func;
    char buf[20]; sprintf(buf,"  jal %s", $1->p->id);
    emit(buf);
  }
	printf("factor: return type of (%s) is: %d\n", $1->p->id, $$.nt_type);
}
		| OP_NOT ID MK_LPAREN relop_expr_list MK_RPAREN
//Vineeth: OP_MINUS condition added as C could have a condition like: "if(-read(i))".
		| OP_MINUS ID MK_LPAREN relop_expr_list MK_RPAREN
		| var_ref
		/* | - var-reference */
{
  int prev_temp = temp_place;
  temp_place = find_inRegister($1->p->id);
  //printf("%s: %d\n", $1->p->id, $1->p->is_array);
  if($1->p->scope == 0 && !temp_place){
    char buf[20];
    temp_place = insert_inRegister($1->p->id);
    if(temp_place < 32){
      sprintf(buf, "  lw $%d, _%s", temp_place, $1->p->id);
      emit(buf);
    }else{
      sprintf(buf, "  l.s $f%d, _%s", temp_place-32, $1->p->id);
      emit(buf);
    }
  }else if (!temp_place){
    char buf[20];
    if($1->p->is_array){
      //printf("%d", last_array_num);
      char bufff[20];
      sprintf(bufff, "%d", $1->arrayoffset);

      char buff[20];
      sprintf(buff, "%s%d", $1->p->id, $1->arrayoffset);
      printf("arrayoffset:%d\n", $1->arrayoffset);
      temp_place = insert_inRegister(buff);

      if(temp_place < 32){
        sprintf(buf, "  lw $%d, _%s($%d)", temp_place, $1->p->id, find_inRegister(bufff));
        emit(buf);
        delete_inregister(prev_temp);
      }else{
        sprintf(buf, "  l.s $f%d, _%s($%d)", temp_place-32, $1->p->id, find_inRegister(bufff));
        emit(buf);
        delete_inregister(prev_temp);
      }

    }else{
      temp_place = insert_inRegister($1->p->id);
      if(temp_place < 32){
        sprintf(buf, "  lw $%d, %d($fp)", temp_place, $1->p->stkPos);
        emit(buf);
      }else{
        sprintf(buf, "  l.s $f%d, %d($fp)", temp_place-32, $1->p->stkPos);
        emit(buf);
      }
    }

  }
  $$.place = temp_place;
$$.nt_type = $1->p->type;			/*Type to be used in array subscript.*/
	$$.func_list_num = tmp_array_dim;		//# of Dimensions.
	strcpy($$.name, $1->p->id);
//	printf("factor-var_ref: variable is = %s, tmp_array_dim = %d.\n", $1->p->id, tmp_array_dim);
	if($1->p->is_array == 1) {	/*It's array.*/
		if($1->p->array_dim != tmp_array_dim) {
			printf("Incompatible array dimensions.%d:%d\n", $1->p->array_dim, tmp_array_dim);
			error = 1;
		}
	}
	tmp_array_dim = 0;		/*Reset global variable*/
}
		| OP_NOT var_ref {$$.nt_type = $2->p->type;}		/*Type to be used in array subscript.*/
//Vineeth: OP_MINUS condition added as C could have a condition like: "if(-a)".
		| OP_MINUS var_ref {$$.nt_type = $2->p->type;}		/*Type to be used in array subscript.*/
		;
var_ref		: ID
	{

		$$ = $1;
//		printf("var_ref: ID: %s\n", $1->p->id);
		if($1->p->type == type_undef)
			printf("ID (%s) undeclared.\n", $1->p->id);

	}
		| var_ref dim		/*Array.*/
{
//	printf("var_ref: variable is = %s\n", $1->p->id);
    //printf("dim_decl_1: expr = %d\n", $2.arrayoffset);
    $$->arrayoffset = $2.arrayoffset;
}

		| var_ref struct_tail
		;


dim		: MK_LB expr MK_RB
	{
		tmp_array_dim++;
    //
    $$ = $2;

    //printf("array:%d dim:%d \n", $2.arrayoffset, tmp_array_dim);

		if($2.nt_type != type_int) {		/*Array dimension check in stmt.*/
			printf("dim: Array subscript is not an integer.\n");

			error = 1;
		}
	}
		;

struct_tail	: MK_DOT ID
		;
%%
#include "lex.yy.c"
FILE *f;
void generateFuncio(char *func)
{
  int x = 0;

  emit("\n.text");
char buf[2000];
char laBuferizacionSeletiva[999];

for(x=0; x < strlen(pt13lula) ; x++)
{
  if(strlen(pt13lula)-1 == x) break;
  laBuferizacionSeletiva[x] = pt13lula[x];
}

sprintf(buf, "%s:\n%s\n%s\n%s\n%s\n%s%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n\n_begin_%s:\n%s",func,
	"  sw $ra, 0($sp)",
	"  sw $fp, -4($sp)",
	"  add $fp, $sp, -4",
	"  add $sp, $sp, -8",
	"  lw $2, _framesize_", func,
	"  sub $sp, $sp, $2",
	"  sw $8, 32($sp)",
	"  sw $9, 28($sp)",
	"  sw $10, 24($sp)",
	"  sw $11, 20($sp)",
	"  sw $12, 16($sp)",
	"  sw $13, 12($sp)",
	"  sw $14, 8($sp)",
	"  sw $15, 4($sp)",
 func,
 laBuferizacionSeletiva
);

for(x=0; x< sizeof(pt13lula); x++ )
{
  pt13lula[x]=0;
}
for(x=0; x< sizeof(laBuferizacionSeletiva); x++ )
{
  laBuferizacionSeletiva[x]=0;
}
emit(buf);
}

void endFuncio(char * func)
{
char buf[2000];
sprintf(buf, "\n\n_end_%s:\n%s%s%s%s%s%s%s%s%s%s%s",
func,
"	lw $8, 32($sp)\n",
"	lw $9, 28($sp)\n",
"	lw $10, 24($sp)\n",
"	lw $11, 20($sp)\n",
"	lw $12, 16($sp)\n",
"	lw $13, 12($sp)\n",
"	lw $14, 8($sp)\n",
"	lw $15, 4($sp)\n",
"	lw $ra, 4($fp)\n",
"	add $sp, $fp, 4\n",
"	lw $fp, 0($fp)"

);
emit(buf);
if(strcmp(func, "main")){
  emit("	jr $ra");
}else{
  emit("  li $v0, 10");
  emit("	syscall");
}
emit("\n.data");
char buff[20];
sprintf(buff,"_framesize_%s: .word 36", func);
emit(buff);

}

int main (int argc, char *argv[])
{
    init_symtab();
    f = fopen("file.spim", "w");
    printf("Symbol Table initialized\n");

    if(argc>0)
        yyin = fopen(argv[1],"r");
    else
        yyin=stdin;

    registr aux = arrays;
    while(aux!=NULL){
      //printf("ok87-\n");
      //prev = aux;
        aux=(registr *)aux->next;
    }
    yyparse();
    aux = arrays;
    while(aux!=NULL){
      //printf("ok87-ss\n");
      //prev = aux;
        aux=(registr *)aux->next;
    }

    if (error == 1)
	printf("%s\n", "Parsing completed. Errors found.");
    else{
      registr aux = arrays;
      while(aux!=NULL){
        //printf("ok87-++\n");
        //prev = aux;
          aux=(registr *)aux->next;
      }
    	printf("%s\n", "Parsing completed. No errors found.");

      char buf[20];
      ptr p;
      int i, value = 0;
      for(i=0;i<TABLESIZE;i++){
          p=symtab[i];
          while(p!=NULL){
              if(p->type == type_int || p->type == type_float){
                  sprintf(buf, "_%s: .word %d", p->id, value);
                  emit(buf);
              }

              p=p->next;
          }
      }


    }

    cleanup_symtab(-1); //clean up the entire symbol table

    aux = arrays;

    while(aux!=NULL /*&& arrCont-- !=0*/){ ////Não vai querer remover isso bernardo

      int oxo = 1000;
      char bufArray[oxo];
      for(; oxo>=0; oxo--)
      {
        bufArray[oxo] = 0;
      }
      int where = 0;
      int x = aux->place;
      while(x>0){
        bufArray[where] = '0';
        if(x != 1){
          bufArray[where+1] = ',';
          bufArray[where+2] = ' ';
          where+=3;
        }
        x--;
      }
      char buf[2000];
      sprintf(buf, "_%s: .word %s", aux->name, bufArray);
      emit(buf);
      aux=aux->next;
    }

    char buf[20];
    m--;
    while(m > 0){
      sprintf(buf,"m%d: .asciiz %s", m, strings[m]);
      emit(buf);
      m--;
    }
    //print_registers();
    clear_inregister();
    //printf("%s\n", "Shit reached here too");
    fclose(f);
    return 0;
} /* main */

yyerror (char *mesg)
  {
      printf("%s\t%d\t%s\t%s\n", "Error found in Line ", linenumber, "next token: ", yytext );
      printf("%s\n", mesg);
      exit(1);
  }
  emit (char *mesg)
    {
        /*printf("%s\t%d\t%s\t%s\n", "Error found in Line ", linenumber, "next token: ", yytext );*/
        /*printf("%s\n", mesg);
        */


        if (f == NULL)
        {
            printf("Error opening file!\n");
            exit(1);
        }


        fprintf(f, "%s\n", mesg);

    }

void copy_func_details(struct var_type *v, struct f_l q) {
	int i;
	for(i = 1; i <= q.func_list_num; i++) {
		if((v->p->is_lib_func == 0) && (v->p->type == type_func))
			v->p->func_dim_list[i] = q.func_arg_type[i];
//		printf("copy_func_details: func_dim_list = %d\n", v->p->func_dim_list[i]);
	}
}

/*
struct f_l copy_func_call_details(struct f_l q) {
	int i;
	for(i = 1; i <= q.func_list_num; i++) {
		if((v->p->is_lib_func == 0) && (v->p->type == type_func))
			v->p->func_dim_list[i] = q.func_arg_type[i];
//		printf("copy_func_details: func_dim_list = %d\n", v->p->func_dim_list[i]);
	}
}
*/

void print_func_details(struct f_l q) {
	int i;
	for(i = 1; i <= q.func_list_num; i++) {
//		if((v->p->is_lib_func == 0) && (v->p->type == type_func))
//			v->p->func_dim_list[i] = q.func_arg_type[i];
//		printf("print_func_details: func_dim_list = %d\n", q.func_arg_type[i]);
	}
}

void check_func_details(struct var_type *v, struct f_l q) {
	int i;
	for(i = 1; i <= q.func_list_num; i++) {
		if((v->p->is_lib_func == 0) && (v->p->type == type_func)) {
			if((v->p->func_dim_list[i] == q.func_arg_type[i]))	;
//				printf("Func (%s): No scalar issues.\n", v->p->id);
			else {
				printf("Func (%s): Scalar issues.\n", v->p->id);
				error = 1;
			}
		}
	}
}
