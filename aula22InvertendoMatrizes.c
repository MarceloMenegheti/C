#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Preencha uma matriz 2x2 lendo valores do usuário e
    //depois troque os valores entre a primeira e a segunda linha.
    int matriz[2][2],aux1,aux2;

    //Lendo valores para matriz
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("\nInforme um numero da matriz[%d][%d]:",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    /*
    //Lendo valores para matriz
    printf("\nInforme um numero da matriz[0][0]");
    scanf("%d",&matriz[0][0]);
    printf("\nInforme um numero da matriz[0][1]");
    scanf("%d",&matriz[0][1]);
    printf("\nInforme um numero da matriz[1][0]");
    scanf("%d",&matriz[1][0]);
    printf("\nInforme um numero da matriz[1][1]");
    scanf("%d",&matriz[1][1]);
    */

    //Imprmindo matriz
    printf("\n%d %d",matriz[0][0],matriz[0][1]);
    printf("\n%d %d\n",matriz[1][0],matriz[1][1]);

    //Auxiliares
    aux1 = matriz[0][0];//1
    aux2 = matriz[0][1];//2

    //Invertendo Valores usando auxiliares
    matriz[0][0] = matriz[1][1];//4
    matriz[0][1] = matriz[1][0];//3
    matriz[1][0] = aux2;//3 -> 2
    matriz[1][1] = aux1;//4 -> 1

    //Imprimindo valores usando auxiliares
    //printf("\n%d %d",matriz[0][0],matriz[0][1]);
    //printf("\n%d %d\n",matriz[1][0],matriz[1][1]);

    //Imprimindo nova Matriz
    printf("\nMatriz Invertida!\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}