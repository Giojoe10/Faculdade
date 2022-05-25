#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "portuguese");

int matriz[3][3];
int i,j,k;
int pares[9], impares;
k=impares=0;


printf("Insira a matriz 3x3\n");
for (i=0;i<3;i++){
    for (j=0;j<3;j++){
        scanf("%d", &matriz[i][j]);
    }

}

for (i=0;i<3;i++){
    for (j=0;j<3;j++){
        if (matriz[i][j]%2==0)
        {
            pares[k] = matriz[i][j];
            k++;
        }
        else
            {
            impares++;
        }
    }
}


printf("\nNúmeros pares:");
for (i=0;i<k;i++)
{
    printf("%d ", pares[i]);
}
printf("\nQuantidade de números impares: %d\n\n", impares);
system("pause");
}
