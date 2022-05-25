#include <stdio.h>
#include <stdlib.h>


int main()
{


    int i,j;
    int matriz[3][3];
    int somaColunas[3];


    printf("Insira os dados da matriz\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&matriz[i][j]);
            fflush(stdin);
        }
    }

    for (j=0;j<3;j++)
    {
        somaColunas[j]=0;
        for(i=0;i<3;i++)
        {
            somaColunas[j]+=matriz[i][j];

        }
    }
    printf("\n\n");
    for (j=0;j<3;j++)
    {
        printf("Soma da Coluna %d = %d\n",j, somaColunas[j]);
    }

}

