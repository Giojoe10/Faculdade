#include <stdio.h>
#include <locale.h>

int fat;

int fatorial(int e)
{
    int f=1, i;
    fat=e;
    for(i=0; i<e-1; i++)
    {
        fat=fat*(e-f);
        f++;
    }
    return fat;
}

int main()
{
    setlocale(0,"portuguese");
    int x, i, j, k, s=0, y, n=0, t, u=0, qnt, r, qntfat, rfat, qntMENOSr, qntMENOSrfat, resultado;
    printf("Ol�! Este c�digo foi criado com o intuito de calcular a o total de elementos na uni�o de x conjuntos!\n\n");
    printf("Professor: Odilon Delmont Filho\n");
    printf("Aluno: Giovanni Mateus Barbieri, RA: 0040482021002\n\n");

    printf("Digite o n�mero de conjuntos\n");
    scanf("%d",&qnt);
    for(i=0; i<qnt; i++)
    {
        printf("\nInsira o valor do %d� conjunto.\n",i+1);
        scanf("%d",&x);
        s=s+x;
    }
    resultado=s;

    for(n=1; n<=qnt-1; n++)
    {

        //calcular a permuta��o
        //definir a permuta��o como limite para o for que repete a pergunta dos valores das intersec��es
        u=0;
        r=n+1;
        qntfat=fatorial(qnt);
        rfat=fatorial(r);
        qntMENOSr=qnt-r;
        qntMENOSrfat=fatorial(qntMENOSr);
        if(rfat==0 || qntMENOSr==0)
        {
            t=1;
        }
        else
        {
            t=qntfat/(qntMENOSrfat*rfat);
        }
        //printf("%d %d %d %d",t,qntfat, rfat, qntMENOSrfat);
        for(i=0; i<t; i++)
        {
            printf("\nInsira o valor de uma intersec��o de %d conjuntos.\n",n+1);
            scanf("%d",&y);
            u=u+y;
            //debug do acumulador
            //printf("%d  %d",u,y);
        }
        if(n%2==0)
        {
            //printf("%d � par.", n);
            resultado=resultado+u;
        }
        else
        {
            //printf("%d � �mpar", n);
            resultado=resultado-u;
        }
        //printf("\n%d",resultado);

    }
    printf("\nA uni�o dos elementos desses %d grupos cont�m %d elementos.\n\n",qnt,resultado);
    getch();
    return resultado;

}
