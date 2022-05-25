#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>


typedef struct dados
{

    int codigo;
    char descricao[100];
    float precoVenda;
    float precoCompra;
    float quantidade;


} PRODUTO;


void Inserir(){

    char numstr[15];
    char resp;

    system("cls");

    FILE *fptr;
    PRODUTO CADASTRO;

    fptr =fopen("Produtos","ab");

    if(fptr == NULL)
    {
        printf("\n Erro durante a abertura do arquivo");
        system("pause");
    }
    else
    {
        do
        {
            system("cls");
            printf("\n----------------------------------------------------------------------");
            printf("\n**************************SUPERMERCADO XY*****************************");
            printf("\n**************************   CADASTRO    *****************************");
            printf("\n----------------------------------------------------------------------");
            fflush(stdin);

            printf("\nDigite o código do produto\n");
            gets(numstr);
            CADASTRO.codigo=atoi(numstr);
            fflush(stdin);

            printf("Digite a descrição do produto\n");
            gets(CADASTRO.descricao);
            fflush(stdin);

            printf("Digite o preço de venda do produto\n");
            scanf("%f", &CADASTRO.precoVenda);
            fflush(stdin);

            printf("Digite o preço de compra do produto\n");
            scanf("%f", &CADASTRO.precoCompra);
            fflush(stdin);

            printf("Digite a quantidade do produto\n");
            scanf("%f", &CADASTRO.quantidade);
            fflush(stdin);


            fwrite(&CADASTRO, sizeof(CADASTRO),1,fptr);

            printf("\nDeseja continuar o cadastro? [S/N]");
            scanf("%c", &resp);

        }
        while(getchar() == 'S' || getchar() == 's');
        fclose(fptr);


    }



}

void Exibir(){

    char numstr[15];
    char resp;

    system("cls");

    FILE *fptr;
    PRODUTO CADASTRO;

    fptr =fopen("Produtos","rb");

    if(fptr == NULL)
    {
        printf("\nErro durante a abertura do arquivo");
        system("pause");

    }
    else
    {
        printf("\n----------------------------------------------------------------------");
        printf("\n**************************SUPERMERCADO XY*****************************");
        printf("\n**************************   PRODUTOS    *****************************");
        printf("\n----------------------------------------------------------------------");

        printf("\n%-10s %-10s %-15s %-10s %-10s \n\n", "CÓDIGO", "DESCRIÇÃO", "PREÇO VENDA", "PREÇO COMPRA", "QUANTIDADE");

        while(fread(&CADASTRO, sizeof(CADASTRO),1,fptr))
        {

            printf("%-10i %-10s R$%-15.2f R$%-10.2f %-10i \n", CADASTRO.codigo, CADASTRO.descricao,CADASTRO.precoVenda,CADASTRO.precoCompra,CADASTRO.quantidade);

        };
        fclose(fptr);
        system("pause");
    }
}

//N FUNFA
void Venda(){
    int c;
    char descricao[100];
    float qnt;
    float disponivel;

    c=0;

    system("cls");

    FILE *fptr;
    PRODUTO CADASTRO;

    fptr =fopen("Produtos","rb");

    if(fptr == NULL)
    {
        printf("\n Erro durante a abertura do arquivo");
        system("pause");
    }
    else
    {
        fflush(stdin);
        printf("\n Informe o produto que foi vendido\n");
        gets(descricao);
        fflush(stdin);

        fread(&CADASTRO,sizeof(PRODUTO),1,fptr);

        while(!feof(fptr) && strcmp(descricao,CADASTRO.descricao)!=0)
        {
            fread(&CADASTRO,sizeof(PRODUTO),1,fptr);
            c++;
        }

        if (feof(fptr))
        {
            printf("\nO registro não consta na base de dados\n\n");
            system("pause");
        }
        else
        {
            fseek(fptr, c*sizeof(PRODUTO),SEEK_SET);

            printf("Quantos(as) %s foram vendidos? (Disponível: %i)\n",CADASTRO.descricao, CADASTRO.quantidade);
            scanf("%d", &qnt);
            fflush(stdin);
            disponivel=CADASTRO.quantidade;
            while(qnt>disponivel){
                printf("Estoque insuficiente, insira a quantidade da venda novamente\n");
                scanf("%i", &qnt);
                fflush(stdin);
                system("pause");
            }
            CADASTRO.quantidade=CADASTRO.quantidade-qnt;

            fwrite(&CADASTRO,sizeof(PRODUTO),1,fptr);

        }
    }
    fclose(fptr);



}

int main(){
    int op;

    setlocale(0,"portuguese");
    do
    {

        system("cls");
        printf("\n------------------------");
        printf("\n[1] - Adiciona Produto..");
        printf("\n[2] - Exibir Produtos...");
        printf("\n[3] - Registrar Venda");
        printf("\n[4] - Encerrar..........");
        printf("\n------------------------");

        printf("\n\nInforme a opção desejada\n");
        scanf("%d", &op);

        switch(op)
        {
        case 1:
            Inserir();
            break;
        case 2:
            Exibir();
            break;
        case 3:
            Venda();
            break;
        case 4:
            exit(0);
        default:
            printf("\nOpção inválida, tente novamente\n");
            system("pause");
        }
    }while (op != 4);



}
