#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){


int matriz[3][3];
int constante, i,j;
int matrizMult[3][3];


printf("Insira a matriz 3x3\n");
for (i=0;i<3;i++){
    for (j=0;j<3;j++){
        scanf("%d", &matriz[i][j]);
    }

}

printf("\nInsira a constante para multiplicar a matriz\n");
scanf("%d", &constante);


printf("Matriz multiplicada:\n");
for (i=0;i<3;i++){
    for (j=0;j<3;j++){
        matrizMult[i][j] = matriz[i][j] * constante;
        printf("%d ", matrizMult[i][j]);
    }
    printf("\n");
}

}
