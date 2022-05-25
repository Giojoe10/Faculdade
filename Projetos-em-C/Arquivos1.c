#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>


typedef struct dados
{

    char nome[20];
    char sobrenome[20];
    char endereco[100];
    int rg;
    int telefone;
    float salario;


} CLIENTE;



void Inserir()
{
    char numstr[15];
    char resp;

    system("cls");

    FILE *fptr;
    CLIENTE FATEC;

    fptr =fopen("Arquivo","ab");

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
            printf("\n**************************FATEC AMERICANA*****************************");
            printf("\n**************************   CADASTRO    *****************************");
            fflush(stdin);

            printf("\n Digite o nome do Cliente\n");
            gets(FATEC.nome);
            fflush(stdin);

            printf("Digite o sobrenome do cliente\n");
            gets(FATEC.sobrenome);
            fflush(stdin);

            printf("Digite o endereço do cliente\n");
            gets(FATEC.endereco);
            fflush(stdin);

            printf("Digite o RG do cliente\n");
            gets(numstr);
            FATEC.rg = atoi(numstr);
            fflush(stdin);

            printf("Digite o telefone do cliente\n");
            gets(numstr);
            FATEC.telefone = atoi(numstr);
            fflush(stdin);

            printf("Digite o salário do cliente\n");
            gets(numstr);
            FATEC.salario=atof(numstr);


            fwrite(&FATEC, sizeof(FATEC),1,fptr);

            printf("\n Deseja continuar o cadastro? [S/N]");
            scanf("%c", &resp);

        }
        while(getchar() == 'S' || getchar() == 's');
        fclose(fptr);


    }
}

void Exibir()
{

    char numstr[15];
    char resp;

    system("cls");

    FILE *fptr;
    CLIENTE FATEC;

    fptr =fopen("Arquivo","rb");

    if(fptr == NULL)
    {
        printf("\n Erro durante a abertura do arquivo");
        system("pause");

    }
    else
    {
        printf("%-10s %-10s %-15s %-10s %-10s %-10s \n\n", "NOME", "SOBRENOME", "ENDEREÇO", "TELEFONE", "RG", "SALARIO");

        while(fread(&FATEC, sizeof(FATEC),1,fptr))
        {

            printf("%-10s %-10s %-15s %-10d %-10d %-10.2f \n", FATEC.nome, FATEC.sobrenome, FATEC.endereco, FATEC.telefone, FATEC.rg, FATEC.salario);

        };
        system("pause");
    }
}

void Procurar()
{
    char nome[15];
    char achou=0;

    system("cls");

    FILE *fptr;
    CLIENTE FATEC;

    fptr =fopen("Arquivo","rb");

    if(fptr == NULL)
    {
        printf("\n Erro durante a abertura do arquivo");
        system("pause");

    }
    else
    {
        fflush(stdin);
        printf("\n Informe o nome a ser pesquisado\n");
        gets(nome);
        fflush(stdin);
        while(fread(&FATEC, sizeof(FATEC),1,fptr))
        {
            if (strcmp(nome, FATEC.nome)==0)
            {
                printf("Nome: %s\n", FATEC.nome);
                printf("Sobreome: %s\n", FATEC.sobrenome);
                printf("Endereço: %s\n", FATEC.endereco);
                printf("Telefone: %d\n", FATEC.telefone);
                printf("RG: %d\n", FATEC.rg);
                printf("Salário: %.2f\n", FATEC.salario);
                achou=1;
                break;
            }

        }

    };

    if (achou==0)
    {
        printf("Nome não encontrado na nossa base de dados.");
    }
    system("pause");
}

void Alterar()
{
    int c;
    char nome[20];

    c=0;

    system("cls");

    FILE *fptr;
    CLIENTE FATEC;

    fptr =fopen("Arquivo","rb+");

    if(fptr == NULL)
    {
        printf("\n Erro durante a abertura do arquivo");
        system("pause");
    }
    else
    {
        fflush(stdin);
        printf("\n Informe o nome a ser alterado\n");
        gets(nome);
        fflush(stdin);

        fread(&FATEC,sizeof(CLIENTE),1,fptr);

        while(!feof(fptr) && strcmp(nome,FATEC.nome)!=0)
        {
            fread(&FATEC,sizeof(CLIENTE),1,fptr);
            c++;
        }

        if (feof(fptr))
        {
            printf("\nO registro não consta na base de dados\n\n");
            system("pause");
        }
        else
        {
            fseek(fptr, c*sizeof(CLIENTE),SEEK_SET);
            printf("Nome: %s\n", FATEC.nome);
            gets(FATEC.nome);
            printf("Sobreome: %s\n", FATEC.sobrenome);
            gets(FATEC.sobrenome);
            printf("Endereço: %s\n", FATEC.endereco);
            gets(FATEC.endereco);
            printf("Telefone: %d\n", FATEC.telefone);
            scanf("%i", &FATEC.telefone);
            printf("RG: %d\n", FATEC.rg);
            scanf("%d", &FATEC.rg);
            printf("Salário: %.2f\n", FATEC.salario);
            scanf("%f", &FATEC.salario);

            fwrite(&FATEC,sizeof(CLIENTE),1,fptr);

        }
    }
    fclose(fptr);
}


int main()
{
    int op;

    setlocale(0,"portuguese");
    do
    {

        system("cls");
        printf("\n------------------------");
        printf("\n[1] - Inserir Registro..");
        printf("\n[2] - Exibir Registro...");
        printf("\n[3] - Pesquisar Registro");
        printf("\n[4] - Alterar Registro..");
        printf("\n[5] - Encerrar..........");
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
            Procurar();
            break;
        case 4:
            Alterar();
            break;
        case 5:
            exit(0);
        default:
            printf("\n Opção inválida, tente novamente");
            system("pause");
        }
    }
    while (op != 5);
}
