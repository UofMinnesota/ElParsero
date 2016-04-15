#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<ctype.h>
#include "symboltable.h"

int getEmptyReg(int floatOffset){
  int empty = 8 + floatOffset;
  while(empty_reg[empty + floatOffset] == 1){
      empty++;
      if(empty > 16 + floatOffset){
        empty = reg->place + floatOffset;
        delete_inregister(reg->place + floatOffset);
        empty_reg[empty] = 1;
        return empty;
      }
  }
  empty_reg[empty] = 1;
  return empty;
}

void delete_inregister(int place){
  regist aux = reg;
  regist prev = NULL;
  while(aux != NULL){
    if(aux->place == place){
      empty_reg [aux->place] = 0;
      if(prev != NULL){
        prev->next = aux->next;
      }else{
        reg = aux->next;
      }
      free(aux);
      return;
    }
    prev = aux;
    aux = aux->next;
  }
  return;
}

void clear_inregister(){
  regist p, q;
  p=reg;
  while(p){
      q=p->next;
      free(p);
      p=q;
  }
}

void print_registers(){
    regist aux = reg;

    while(aux!=NULL){
        printf("name:%s\n", aux->name);
        aux=aux->next;
    }

    return;
}

int find_inRegister(char name[]){
  regist aux = reg;
  while(aux != NULL){
    if(!strcmp(aux->name, name)){
      //printf("place find:%d\n", aux->place);
      return aux->place;
    }
    aux = aux->next;
  }
  return 0;
}

int insert_inRegister(char name[]){
  int place = 0;
  if(place = find_inRegister(name)){    //if find the name in the register
      return place; //return place
  }
  else{
      regist aux = reg;
      regist prev;
      while(aux!=NULL){
          prev = aux;
          aux=aux->next;
      }

      aux=(regist)malloc(sizeof(struct registe));
      strcpy(aux->name,name);
      if(!isFloat(name)){
        aux->place = getEmptyReg(0);
      }else{
        aux->place = getEmptyReg(25);
      }
      if(prev != NULL){
        prev-> next = aux;
      }
      if(reg == NULL){
        reg = aux;
      }
      return aux->place;
  }
}

int hash(char *key) /*Hash function */
{
    int val=0,pow=1,len,i;
    len=strlen(key);
    for(i=0;i<len;i++){
        val=(val+(((key[i]%TABLESIZE)*pow)%TABLESIZE))%TABLESIZE;
        pow=(pow*(8779)%TABLESIZE)%TABLESIZE;
    }
    return val;
}

ptr getnode(char *text)	/* Create node in Symbol Table */
{
    ptr tmp;
    tmp=(ptr)malloc(sizeof(struct node));
    strcpy(tmp->id,text);
//Vineeth
//	printf("IDs in ST: %s.\n", tmp->id);
    tmp->freq=1;
    tmp->first_time=1;
    tmp->is_lib_func=0;
    tmp->next=NULL;
    return tmp;
}

struct com_node* getcomment(char *str)	/* Put comment into Comment Table */
{
    struct com_node *tmp;
    tmp=(struct com_node*)malloc(sizeof(struct com_node));
    tmp->com=(char *)malloc(strlen(str)*sizeof(char));
    strcpy(tmp->com,str);
    tmp->next=NULL;
    return tmp;
}

void init_symtab()	/* Initialize Symbol Table */
{
    int i;
    for(i=0;i<TABLESIZE;i++)
        symtab[i]=NULL;
    return;
}

ptr insert_id(char *text, int cur_scope)	/* Populate Symbol Table */
{
    int val=hash(text);
    ptr p=symtab[val],q;
//Vineeth
//	printf("insert_id() -> Scope: %d.\n", cur_scope);
    if(p==NULL){    //insert new element
//	printf("ST: New entry.\n");
        symtab[val]=getnode(text);
        return symtab[val];
    }
    else{
//	printf("ST: Old entry.\n");
        q=symtab[val];
        while((p!=NULL) && (p->scope > cur_scope)){
            q=p;
            p=p->next;
        }
        if(p==symtab[val]){
            q=getnode(text);
            q->next=p;
            symtab[val]=q;
            return symtab[val];
        }
        else{   //insert the new node between q and p
            q->next=getnode(text);
            q->scope=cur_scope;
            (q->next)->next=p;
            return q->next;
        }
    }
}

ptr lookup(char *text, int scope)
{
//Vineeth
//	printf("lookup() -> Scope: %d.\n", scope);
    int val=hash(text);
    ptr p=symtab[val];
    while(p!=NULL){
        if(!strcmp(p->id,text) && p->scope<=scope)
            return p;
        p=p->next;
    }
    return p;
}
int isFloat(char name[]){
  int aux = 0;
  int val=hash(name);
  ptr p=symtab[val];
  while(p!=NULL){
      if(!strcmp(p->id,name))
          if(p->type == type_float){
            aux = 1;
          }
          return aux;
      p=p->next;
  }
  return aux;
}
void print_symtab()	/* Print Symbol Table */
{
    ptr p;
    int i;
//    printf("Frequency of identifiers:\n");
    for(i=0;i<TABLESIZE;i++){
        p=symtab[i];
        while(p!=NULL){
            printf("name:%s, scope:%d, arg_num:%d, type:%d.\n",p->id, p->scope, p->arg_num, p->type);
            p=p->next;
        }
    }
    return;
}

void cleanup_symtab(int scope)	/* Clean Symbol Table */
{
    int i;
    ptr p,q;
    if(scope<0){
        for(i=0;i<TABLESIZE;i++){
            p=symtab[i];
            while(p){
                q=p->next;
                free(p);
                p=q;
            }
        }
    }
    else{
        for(i=0;i<TABLESIZE;i++){
            p=symtab[i];
            while(p && p->scope==scope){
                q=p->next;
                free(p);
                p=q;
            }
            symtab[i]=p;
        }
    }
    return;
}

void init_comtab()	/* Initialize Comment Table */
{
    comtab=NULL;
    curcom=NULL;
    return;
}

void insert_comment(char *comment)	/* Insert comments into Comment Table */
{
    if(comtab==NULL){   //first comment
        comtab=getcomment(comment);
        curcom=comtab;
    }
    else{
        curcom->next=getcomment(comment);
        curcom=curcom->next;
    }
    return;
}

void print_comtab()	/* Print Comment Table */
{
    struct com_node *tmp;
    tmp=comtab;
    while(tmp!=NULL){
        printf("/*%s*/\n",tmp->com);
        tmp=tmp->next;
    }
    return;
}

void cleanup_comtab()	/* Clean Comment Table */
{
    struct com_node *tmp,*tmp1;
    tmp=comtab;
    while(tmp){
        tmp1=tmp->next;
        free(tmp);
        tmp=tmp1;
    }
    return;
}
