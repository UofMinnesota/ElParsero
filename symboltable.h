enum all_type {type_undef,type_int,type_float,type_void,type_def,type_func,type_struct};

struct node{			/* Structure for Identifiers */
    char id[257];

    char struct_name[257];
    int freq,   		//freq of the variable
        scope,  		//scope of the variable
        is_typedef, 		//true if the ID is a typedef name, not a variable
        first_time, 		//to differentiate between decl and subsequent use
        stkPos,
      arg_num,		/*# of Arguments in the function*/
	is_lib_func,		/*Temp solution to handle main(), read(), fread() & write().*/
	is_array,
	array_dim;		/*Array dimension count.*/
  int place;

    int func_dim_list[256];	//To store function dimension details.
    enum all_type return_type;	/*Return type of the function*/
    enum all_type type; 	//enumerated type of the variable
    struct node *next;
};

typedef struct node* ptr;

#define TABLESIZE 100
ptr symtab[TABLESIZE];

struct com_node{	/* Structure for Comments */
    char *com;
    struct com_node *next;
};
struct com_node *comtab,*curcom;


struct registe{
  char name[256];
  int place;
  struct registe *next;
  int flago ;
};
struct registre{
  char name[256];
  int place;
  struct registre *next;
  int flago ;
};
typedef struct registe* regist;
typedef struct registre* registr;
regist reg;
registr arrays ;

int empty_reg[64];
char strings[256][256];
/* Function definitions */
int hash(char *key);
int arrCont;
ptr getnode(char *text);
int isFloat(char name[]);
struct com_node* getcomment(char *str);
void init_symtab();
ptr insert_id(char *text,int scope);
int insert_inRegister(char name[]);
void print_registers();
ptr lookup(char *text,int scope);
void print_symtab();
void cleanup_symtab(int scope);
void init_comtab();
void insert_comment(char *comment);
void print_comtab();
void cleanup_comtab();
void insertArray(char name[], int dim);
void clear_inregister();
void delete_inregister(int place);
