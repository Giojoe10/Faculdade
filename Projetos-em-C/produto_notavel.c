#include <stdio.h>
#include <locale.h>
#include <math.h>

int fatorial(int f)
{
    int k=f, i;
    for(i=1; i<=f-1; i++)
    {
        k*=(f-i);
    }
    return k;
}


int main()
{
    setlocale(0,"portuguese");
    int A, X, n, r, nCr,resultado, potenciac=0,potenciad, total=0;

    printf("Vamos calcular a expanção de um binômio. (A+X)^n\n");
    printf("Defina um valor para A\n");
    scanf("%d",&A);
    printf("Defina um valor para X\n");
    scanf("%d",&X);
    printf("Defina um valor para n\n");
    scanf("%d",&n);
    printf("\nEste é o resultado de seu binômio expandido:\n");
    potenciad=n;
    for(r=0; r<=n; r++)
    {
        if(fatorial(r)==0 || (n-r)==0)
        {
            nCr=1;
        }
        else
        {
            nCr=fatorial(n)/(fatorial(r)*fatorial(n-r));
        }
        resultado=nCr*(pow(A,potenciad))*(pow(X,potenciac));
        potenciac++;
        potenciad--;
        //printf("%d ",nCr);
        printf("%d ",resultado);
        total+=resultado;
    }
    printf("\nA soma total é igual a: %d\n\n",total);
    //printf("%d %d %d",A,X,n);
    //printf("%d %d %d %d",fatorial(n), fatorial(r), fatorial(n-r), nCr);
    system("pause");
    return 0;
}
