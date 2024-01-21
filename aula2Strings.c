#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nDigite slguma coisa ");
    char palavra[255];

    setbuf(stdin,0);//Limpa o Buffer
    fgets(palavra,255,stdin);//Lê a String

    palavra[strlen(palavra)-1] = '\0';//Limpa as casas não utilizadas
    printf("\n%s",palavra);//Imprime na tela
}
