#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorA,valorB,sum,sub,div,mult,media;
    int opcao;

    printf("\n---------------------------------\n");
    printf("-----------CALCULADORA-----------");
    printf("\n---------------------------------\n");
    printf("\nINFORME UM VALOR: ");
    scanf("%f",&valorA);

    printf("\nINFORME UM SEGUNDO VALOR: ");
    scanf("%f",&valorB);


    printf("\n---------------------------------\n");
    printf("------ESCOLHA UMA DAS OPCOES-----");
    printf("\n---------------------------------\n");
    printf("--OPCAO 1-SOMA\n--OPCAO 2-SUBTRACAO\n--OPCAO 3-DIVISAO\n--OPCAO 4-MULTIPLICACAO\n--OPCAO 5-MEDIA\n");

    printf(": ");
    scanf("%d",&opcao);

    sum=(valorA+valorB);
    sub=(valorA-valorB);
    div=(valorA/valorB);
    mult=(valorA*valorB);
    media=(valorA+valorB)/2;

    switch(opcao){
    case 1:
        printf("\n---------------------------------\n");
        printf("o valor da soma de %.2f + %.2f = %.2f",valorA,valorB,sum);
        printf("\n---------------------------------\n");
        break;
    case 2:
        printf("\n---------------------------------\n");
        printf("o valor da subtracao de %.2f - %.2f = %.2f",valorA,valorB,sub);
        printf("\n---------------------------------\n");
        break;
    case 3:
        printf("\n---------------------------------\n");
        printf("o valor da divisao de %.2f / %.2f = %.2f",valorA,valorB,div);
        printf("\n---------------------------------\n");
        break;
    case 4:
        printf("\n---------------------------------\n");
        printf("o valor da multiplicacao de %.2f * %.2f = %.2f",valorA,valorB,mult);
        printf("\n---------------------------------\n");
        break;
    case 5:
        printf("\n---------------------------------\n");
        printf("o valor da media de %.2f e %.2f = %.2f",valorA,valorB,media);
        printf("\n---------------------------------\n");
        break;
    default:
        printf("\n---------------------------------\n");
        printf("o valor %d invalido!!",opcao);
        printf("\n---------------------------------\n");
        break;
    }

}