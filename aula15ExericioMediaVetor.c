#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main()
{
//Crie um algoritmo que leia 3 valores para um vetor de 3 posições
//e depois calcule a média dos valores acessando o vetor.
int tamanho;
float vetor[TAM],media,media2,soma = 0;

for(int i = 0;i < TAM; i++){
    printf("\nINSIRA UM VALOR: ");
    scanf("\n%f", &vetor[i]);
}


for(int i = 0; i < TAM; i++){
    printf("\nVetor[%d] : %.1f",i,vetor[i]);
}

media = (vetor[0]+vetor[1]+vetor[2])/3;
printf("\n\nA media eh: %.1f\n\n",media);


//definindo um tamanho para o vetor
printf("\nInforme um tamanho para o vetor :");
scanf("\n%d",&tamanho);

//refazendo o algoritmo
for(int j = 0;j < tamanho; j++){
    printf("\nINSIRA UM VALOR: ");
    scanf("\n%f", &vetor[j]);
    soma = soma + vetor[j];
}


for(int j = 0; j < tamanho; j++){
    printf("\nVetor[%d] : %.1f",j,vetor[j]);
}

media2 = soma/tamanho;
printf("\n\nA media eh: %.1f\n\n",media2);


}