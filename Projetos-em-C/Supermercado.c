#include <stdio.h>


int main()
{
    float valor=0, desconto=0, pagar;
    printf("Insira o valor da compra\n");
    scanf("%f",&valor);
    if (valor>300)
    {
        desconto = (valor-300)*0.1;
        pagar=valor-desconto;
        printf("\nDesconto: R$%.2f",desconto);
        printf("\nTotal a pagar: R$%.2f",pagar);

    }
    else
    {
        pagar=valor;
        printf("\n\nTotal a pagar: R$%.2f",valor);
    }
}
