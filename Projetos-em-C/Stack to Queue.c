#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct no
{
    char nome[20];
    int idade;
    struct no *next,*back;

} no;

typedef struct fila
{
    char nome[20];
    int idade;
    struct fila *next;
} fila;

struct no *topo,*auxiliar;
struct fila *inicio,*fim,*aux;
int c, listaC;
c=0;



void ExibirLista(){
    int i;
    aux=inicio;
    for (i=0;i<listaC;i++){
        printf("Nome: %s Idade: %i\n",aux->nome,aux->idade);
        if (aux!=NULL){
            aux=aux->next;
        }
        else{
            return;
        }
    }
    system("pause");
}

void Enqueue(xNome, xIdade)
{
    if(inicio == NULL)
    {
        aux=(fila*)malloc(sizeof(fila));
        aux->next = NULL;
        inicio = aux;
        fim = aux;
        strcpy(aux->nome, xNome);
        aux->idade = xIdade;
        listaC++;
    }
    else if(listaC >=10)
    {
        printf("\nQueue is Full");
    }
    else
    {
        aux =(fila*)malloc(sizeof(fila));
        fim->next = aux;
        aux->next = NULL;
        fim = aux;
        strcpy(aux->nome, xNome);
        aux->idade = xIdade;
        listaC++;
   }
}


void enterdata()
{

    printf("\nInforme o nome da pessoa\n");
    scanf("%s",&topo->nome);
    printf("\nInforme a Idade da Pessoa\n");
    scanf("%d",&topo->idade);
}

void Push()
{
    if(topo == NULL)
    {
        topo =(no*)malloc (sizeof(no));
        topo->next = NULL;
        topo->back = NULL;
        auxiliar=topo;
        enterdata();
        c++;
    }
    else
    {
        if(c >=5)
        {
            printf("\nStack Overflow....\n");
            system("pause");
        }
        else
        {
            topo = (no*)malloc (sizeof(no));
            auxiliar->next = topo;
            topo->back = auxiliar;
            topo->next = NULL;
            auxiliar = topo;
            enterdata();
            c++;
        }
    }

}
void pop()
{
    if(topo == NULL)
    {
        printf("\nStack is Empty\n");
        system("pause");
    }else {

    if(topo->next == NULL && topo->back == NULL)
    {
        Enqueue(topo->nome,topo->idade);
        free(topo);
        topo = NULL;
        auxiliar = NULL;
        c=0;
        printf("\nStack is Empty\n");
        system("pause");
    }else{

        topo=topo->back;
        Enqueue(auxiliar->nome,auxiliar->idade);
        free(auxiliar);
        topo->next = NULL;
        auxiliar=topo;
        c--;

        printf("\nRemovido com sucesso Elemento da Pilha\n");
        system("pause");
    }
    }
}

void top()
{
    if(topo == NULL)
    {
        printf("\nStack is Empty...");
        printf("\n\n");
        system("pause");
    }else {

    printf("\nConteudo do Topo da Pilha\n");
    printf("\nNome .......: %s",topo->nome);
    printf("\nIdade.......:%d",topo->idade);
    printf("\n\n");
    system("pause");
    }
}


main()
{
    setlocale(0,"portuguese");
    topo = NULL;
    auxiliar = NULL;
    int op;

    do
    {

        system("cls");
        printf("\n------- STACK - Pilha ----------");
        printf("\n[1]  - PUSH - Insere Elemento na Pilha");
        printf("\n[2]  - POP  - Remove Elemento da Pilha");
        printf("\n[3]  - TOP  - Consulta o Topo da Pilha");
        printf("\n[4]  - Exibir conteúdo da fila de descarte");
        printf("\n[5] - Sair");

        printf("\nInforme a opção\n");
        scanf("%d",&op);

        switch(op)
        {

        case 1:
            Push();
            break;
        case 2:
            pop();
            break;
        case 3:
            top();
            break;
        case 4:
            ExibirLista();
            break;
        case 5:
            break;
        default:

            printf("\nOpção invalida.. tente novamente\n");
            system("pause");

        }
    }
    while(op!=5);

}



