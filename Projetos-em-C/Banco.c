#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(0,"portuguese");
    float saldo=0, bonus;
    int i;
    for(i=0;i<3;i++)
{

    printf("Insira o saldo médio do último ano.\n");
    scanf("%f",&saldo);

    if(saldo<=300 && saldo>=100)
    {
        bonus=saldo*0.1;
    }
    else if(saldo<=600)
    {
        bonus=saldo*0.25;
    }
    else
    {
        bonus=saldo*0.4;
    }



    printf("Crédito: R$%.2f\n",bonus);
    system("pause");
    }
}
