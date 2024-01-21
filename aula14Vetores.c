#include <stdio.h>
#include <stdlib.h>
#define TAM 3
int main()
{
int vetor[TAM];
vetor[0] = 5;
vetor[1] = 12;
vetor[2] = 55;

//Exeibindo os valores do vetor
printf("\nPosicao 0: %d",vetor[0]);
printf("\nPosicao 1: %d",vetor[1]);
printf("\nPosicao 2: %d\n",vetor[2]);

//Imprimindo vetor em um laço de repetição
for(int cont = 0; cont < TAM; cont++){
    printf("\nposicao %d : %d",cont,vetor[cont]);
}

for(int cont = 0; cont< TAM;cont++){
    vetor[cont]++;
    printf("\nposicao %d : %d",cont,vetor[cont]);
}

//Lendo 3 valores para o vetor
for( int cont = 0;cont < TAM;cont++){
    printf("\n\nAdd um valor: ");
    scanf("%d",&vetor[cont]);
}

 //Imprimindo vetor em um laço de repetição
for(int cont = 0; cont < TAM; cont++){
    printf("\nposicao %d : %d",cont,vetor[cont]);
}

}
