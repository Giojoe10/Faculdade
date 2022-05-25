#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (0,"portuguese");
    int n, i, qtdhomens=0, qntmulheres=0;
    float altura, maior=0, menor=10000,mediamulheres=0;
    char sexo;
    char maiorsexo;

    printf("Insira o número de pessoas\n");
    scanf("%d", &n);
    fflush(stdin);

    for(i=1; i<=n; i++)
    {
        printf("\nInsira a altura da %dª pessoa (METROS)\n", i);
        scanf("%f", &altura);
        fflush(stdin);
        printf("\nInsira o sexo da %dª pessoa (M ou F)\n", i);
        scanf("%c", &sexo);
        fflush(stdin);

        if (i==1){

            menor=altura;
        }
        else if (altura<menor)
        {
            menor=altura;
        }


        else if (altura>maior)
        {
            maior=altura;
            maiorsexo=sexo;
        }


        if(sexo == 'M' || sexo == 'm')
        {
            qtdhomens++;
        }
        else if (sexo == 'F' || sexo == 'f')
        {
            mediamulheres=mediamulheres+altura;
            qntmulheres++;
        }
    }

    mediamulheres=mediamulheres/qntmulheres;

    printf("\n\nResultado dos dados:\n");
    printf("Maior Altura = %.2f m\n", maior);
    printf("Menor Altura = %.2f m\n", menor);
    printf("Média da Altura das Mulheres = %.2f m\n", mediamulheres);
    printf("Número de Homens = %i\n", qtdhomens);
    printf("Sexo da pessoa mais alta (%.2f m) = %c",maior,maiorsexo);
    printf("\n\nFeito por: Giovanni Mateus Barbieri\nProfessor: Grande Toni %c\n\n",3);


}
