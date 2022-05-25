#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>


void Ex1()
{

    int matriz[2][4];
    int maior=0;
    int menor=5000;
    float pares=0, mediaPares=0;
    int i, j;

    system("cls");
    printf("Exercício 1:\n");
    printf("Insira a matriz 2x4:\n");

    for(i=0; i<2; i++)
    {
        printf("Linha %i, ", i+1);

        for(j=0; j<4; j++)
        {
            printf("termo %i:\n", j+1);
            scanf("%i", &matriz[i][j]);

            if(matriz[i][j]>maior)
            {
                maior=matriz[i][j];
            }

            if(matriz[i][j]<menor)
            {
                menor=matriz[i][j];
            }
            if(matriz[i][j]%2==0)
            {
                pares++;
                mediaPares+=matriz[i][j];
            }

        }
    }


    system("cls");
    printf("Matriz:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%i ",matriz[i][j]);
        }
        printf("\n");

    }
    printf("Maior elemento: %i\n", maior);
    printf("Menor elemento: %i\n", menor);

    mediaPares=mediaPares/pares;

    printf("Média dos elementos pares: %.2f\n", mediaPares);


    system("pause");

}


void Ex2()
{
    char nomes[7][20];
    char disciplinas[4][25];
    float notas[4][7];
    float mediaAlunos[7]= {0};
    float mediaDisciplinas[4]= {0};
    int i,j;

    system("cls");
    printf("Exercício 2-\n");

    for(i=0; i<4; i++)
    {
        printf("Disciplina %d: ", i+1);
        fflush(stdin);
        fgets(disciplinas[i],25,stdin);
        fflush(stdin);
        strtok(disciplinas[i], "\n");
    }
    printf("\n");


    for(i=0; i<7; i++)
    {
        printf("Aluno %i:\n", i+1);
        printf("Nome: ", i+1);
        fflush(stdin);
        fgets(nomes[i],20,stdin);
        fflush(stdin);
        for(j=0; j<4; j++)
        {
            printf("Nota em %s: ", disciplinas[j]);
            fflush(stdin);
            scanf("%f", &notas[j][i]);
            fflush(stdin);
            mediaAlunos[i]+=notas[j][i];
            mediaDisciplinas[j]+=notas[j][i];
        }
        mediaAlunos[i]=mediaAlunos[i]/4;

    }
    for(i=0; i<4; i++)
    {
        mediaDisciplinas[i]=mediaDisciplinas[i]/7;
    }


    system("cls");

    printf("---------------------------------------------------------");
    printf("\n%-15.15s %-15.15s %-15.15s %-15.15s %-15.15s %-15.15s\n", "Nomes", disciplinas[0], disciplinas[1], disciplinas[2], disciplinas[3], "Média");
    for(i=0;i<7;i++){
        printf("\n");
        printf("%-15.15s ", nomes[i]);
        for(j=0;j<4;j++){
            printf("%-15.2f ", notas[j][i]);
        }
        printf("%-15.2f", mediaAlunos[i]);

    }
    printf("\n%-15.15s", "Média:");

        for(i=0; i<4; i++)
    {
        printf("%-15.2f ", mediaDisciplinas[i]);
    }

    system("pause");
}


int main()
{

    setlocale(0,"portuguese");

    int op;

    do
    {

        system("cls");
        printf("---------------------------------------------------------------\n");
        printf("Prova de Linguagem de Programação\n");
        printf("Professor: Toni     Aluno: Giovanni Mateus Barbieri\n");
        printf("FATEC Americana - Análise e desenvolvimento de sistemas (Manhã)\n");
        printf("---------------------------------------------------------------\n");

        printf("\n------------------------");
        printf("\n[1] - Exercício 1.......");
        printf("\n[2] - Exercício 2.......");
        printf("\n[3] - Sair..............");
        printf("\n------------------------");

        printf("\n\nInforme a opção desejada\n");
        scanf("%d", &op);

        switch(op)
        {

        case 1:
            Ex1();
            break;
        case 2:
            Ex2();
            break;
        case 3:
            exit(0);
        default:
            printf("\nOpção inválida, tente novamente\n");
            system("pause");

        }



    }
    while(op!=3);


}
