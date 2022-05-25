#include <stdio.h>
#include <stdlib.h>


int main()
{


    int i,j;
    int matriz[3][3];
    int somaLinhas[3];


    printf("Insira os dados da matriz\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&matriz[i][j]);
            fflush(stdin);
        }
    }

    for (i=0;i<3;i++)
    {
        somaLinhas[i]=0;
        for(j=0;j<3;j++)
        {
            somaLinhas[i]+=matriz[i][j];

        }
    }
    printf("\n\n");
    for (i=0;i<3;i++)
    {
        printf("Soma da linha %d = %d\n",i, somaLinhas[i]);
    }

}
