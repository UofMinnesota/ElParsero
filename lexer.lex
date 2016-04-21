%option noyywrap
%{
%}
letter   [A-Za-z]
digit    [0-9]
kwInt    "int"
kwFloat  "float"
kwVoid   "void"
kwIf     "if"
kwElse   "else"
kwWhile  "while"
kwFor	 "for"
kwStruct "struct"
kwUnion  "union"
kwTypedef "typedef"
kwReturn "return"
ID       ({letter})({letter}|{digit}|"_")*
op_assign        "="
op_or   "||"
op_and  "&&"
op_not  "!"
op_eq   "=="
op_ne   "!="
op_lt   "<"
op_gt   ">"
op_le   "<="
op_ge   ">="
op_plus "+"
op_minus "-"
op_times "*"
op_divide "/"
int-const {digit}+
flt-const {digit}+(("."){digit}+)?
s-const \"([^"\n])*\"
comment	"/*"(([^*])|([*]+[^/*]))*("*")+"/"
ws       [ \t]+
newline  "\n"
mk_lparen "("
mk_rparen ")"
mk_lbrace "{"
mk_rbrace "}"
mk_lsqbrace "["
mk_rsqbrace "]"
mk_comma  ","
mk_semicolon ";"
mk_dot  "."
error    .

%%

{ws}            ;   /* do nothing with whitespace */
{comment}	     {char cmm[708];int x = 0;
                for(x=0; x<708;x++) cmm[x] = 0;
                strcat(cmm, "#"); strcat(cmm, yytext);
                int hue = 0;

                char enterado[930];
                for(x=0; x<930;x++) enterado[x] = 0;
                for(x=0; x<strlen(cmm); x++,hue++)
                {
                  enterado[hue] = cmm[x];
                  if( cmm[x] == '\n')
                  {
                    enterado[++hue] = '#';
                  }
                }
                emit(enterado);

                }
{kwInt}         {tokens++;return INT;}
{kwFloat}       {tokens++;return FLOAT;}
{kwVoid}	{tokens++;return VOID;}
{kwIf}          {tokens++;return IF;}
{kwElse}        {tokens++;return ELSE;}
{kwWhile}       {tokens++;return WHILE;}
{kwFor}      	{tokens++;return FOR;}
{kwStruct}	{tokens++;return STRUCT;}
{kwUnion}	{tokens++;return STRUCT;}
{kwTypedef}     {tokens++;return TYPEDEF;}
{kwReturn}      {tokens++;return RETURN;}
{ID}            {
    tokens++;
//Vineeth
//	printf("\nLexer ID: %s\n", yytext);
    ptr p=lookup(yytext,cur_scope);
    if(p==NULL){
        p=insert_id(yytext,cur_scope);
        p->scope=cur_scope;
//	printf("\nLexer Scope: %d\n", cur_scope);
    	if(!strcmp(p->id,"main") || !strcmp(p->id,"read") || !strcmp(p->id,"fread") || !strcmp(p->id,"write")) {
		p->is_lib_func = 1;
		p->type = type_func;
	}
    }
    else
        p->freq++;
    struct var_type *v;
    v=(struct var_type *)malloc(sizeof(struct var_type));
    v->p=p;
    yylval.variable=v;
    return ID;
                }
{op_assign}     {tokens++;return OP_ASSIGN;}
{op_and}        {tokens++;return OP_AND;}
{op_or}         {tokens++;return OP_OR;}
{op_not}        {tokens++;return OP_NOT;}
{op_eq}         {tokens++;return OP_EQ;}
{op_ne}         {tokens++;return OP_NE;}
{op_lt}         {tokens++;return OP_LT;}
{op_gt}         {tokens++;return OP_GT;}
{op_le}         {tokens++;return OP_LE;}
{op_ge}         {tokens++;return OP_GE;}
{op_plus}       {tokens++;return OP_PLUS;}
{op_minus}      {tokens++;return OP_MINUS;}
{op_times}      {tokens++;return OP_TIMES;}
{op_divide}     {tokens++;return OP_DIVIDE;}
{int-const}	{
	tokens++;
	struct const_type *p;
	p = (struct const_type *) malloc(sizeof(struct const_type));
	p->con_type = 1;	/*Integer type*/
	p->const_u.ival = atoi(yytext);
	yylval.con_pt = p;
	return CONST;
		}
{flt-const}	{
	tokens++;
	struct const_type *p;
	p = (struct const_type *) malloc(sizeof(struct const_type));
	p->con_type = 2;	/*Float type*/
	p->const_u.fval = atof(yytext);
	yylval.con_pt = p;
	return CONST;
		}
{s-const}	{
	tokens++;
	struct const_type *p;
	p = (struct const_type *) malloc(sizeof(struct const_type));
	p->con_type = -1;	/*String type*/
	p->const_u.sc = yytext;
	yylval.con_pt = p;
	return CONST;
		}
{mk_lparen}     {tokens++;return MK_LPAREN;}
{mk_rparen}     {tokens++;return MK_RPAREN;}
{mk_lbrace}     {tokens++;return MK_LBRACE;}
{mk_rbrace}     {tokens++;return MK_RBRACE;}
{mk_lsqbrace}   {tokens++;return MK_LB;}
{mk_rsqbrace}   {tokens++;return MK_RB;}
{mk_comma}      {tokens++;return MK_COMMA;}
{mk_semicolon}  {tokens++;return MK_SEMICOLON;}
{mk_dot}	{tokens++;return MK_DOT;}
{newline}       {linenumber+=1;}
{error}         return ERROR;

%%
