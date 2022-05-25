#include <stdio.h>
#include <stdlib.h>


int main(){


typedef struct no{

char nome[20];
int idade;

}no;

struct no *a,*b,*c,*d,*e;
int i;

a=b=c=d=e=NULL;



for (i=0;i>5;i++){
    a=(no*) malloc(sizeof(no));
    printf("Insira o nome do dado a\n", i+1);
    scanf("%s",&a->nome);
    printf("Insira a idade do dado a\n", i+1);
    scanf("%d",&a->idade);

}

free(a);
a=NULL;


}
