#include <stdio.h>
#include <locale.h>
//Uma empresa decidiu fazer um levantamento em relação aos candidatos que se apresentarem para o preenchimento de vagas no seu quadro de funcionários.
//Supondo que você seja o Analista dessa empresa, faça um programa que exiba:
//O número de candidatos do sexo masculino;
//O número de candidatos do sexo feminino;
//A idade média dos homens que já tem experiência no serviço;
//A porcentagem dos homens com mais de 45 anos entre o total dos homens;
//O numero de mulheres com idade inferior a 35 anos e com experiência em serviço;
//A menor idade entre as mulheres que já tem experiência em serviço.

int main()
{
    setlocale(0, "portuguese");
    int i, n, idade, f, mExp, f35, menorf;
    char sexo, experiencia;
    float mediam, porcentagemM45, m, m45;


    i=n=idade=m=f=mExp=m45=f35=menorf=mediam=porcentagemM45=0;

    printf("Insira o número de candidatos:\n");
    scanf("%d", &n);
    fflush(stdin);
    for (i=1; i<=n; i++)
    {


        printf("\nDigite o sexo do %dº candidato (M/F)\n", i);
        scanf("%c", &sexo);
        fflush(stdin);
        printf("\nInsira a idade do %dº candidato\n", i);
        scanf("%d", &idade);
        fflush(stdin);
        printf("\nO %dº funcionário tem experiência?(S/N)\n", i);
        scanf("%c", &experiencia);
        fflush(stdin);

        if(sexo == 'M' || sexo == 'm')
        {
            m++;

            if(experiencia == 'S' || experiencia == 's')
            {
                mediam=mediam+idade;
                mExp++;
            }
            if (idade>45)
            {
                m45++;
            }


        }
        else if (sexo == 'F' || sexo == 'f')
        {

            f++;
            if (experiencia=='S' || experiencia =='s')
            {

                if (idade<35)
                {
                    f35++;
                }
                if (menorf==0)
                {
                    menorf=idade;
                }
                else
                {
                    if(idade<menorf)
                    {
                        menorf=idade;
                    }
                }
            }

        }


    }

    mediam=mediam/mExp;
    porcentagemM45=m45/m;
    //printf("\n m45= %d m= %d",m45,m);

    printf("\n\nNúmero de candidatos do sexo masculino: %.0f", m);
    printf("\nNúmero de candidatos do sexo feminino: %d", f);
    printf("\nIdade média dos homens que já tem experiência: %.2f", mediam);
    printf("\nPorcentagem de homens com mais de 45 anos entre o total de homens: %.2f", porcentagemM45);
    printf("\nNúmero de mulheres com idade inferior a 35 anos e com experiência em serviço: %d", f35);
    printf("\nA menor idade entre as mulheres que já tem experiência em serviço: %d", menorf);







}


//Uma empresa decidiu fazer um levantamento em relação aos candidatos que se apresentarem para o preenchimento de vagas no seu quadro de funcionários.
//Supondo que você seja o Analista dessa empresa, faça um programa que exiba:
//O número de candidatos do sexo masculino;
//O número de candidatos do sexo feminino;
//A idade média dos homens que já tem experiência no serviço;
//A porcentagem dos homens com mais de 45 anos entre o total dos homens;
//O numero de mulheres com idade inferior a 35 anos e com experiência em serviço;
//A menor idade entre as mulheres que já tem experiência em serviço.

