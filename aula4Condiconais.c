#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a =8,opcao = 2;
    char c = 'X';

    if(a==5){
        printf("a variavel eh igual a 5");
    }
    if(a %2 ==1){
        printf("\na variavel eh impar\n");
    }else{
        printf("\na variavel eh par\n");
    }


    if(c=='x'){
        printf("o valor de %c\n",c);
    }else{
        printf("o valor de C eh: %c\n",c);
    }


    if(opcao ==1){
        printf("\nA opcao eh = 1");
    }else if(opcao ==2){
        printf("A opcao eh = 2\n");
    }else{
        printf("\nA opcao eh %d\n\n",opcao);
    }


    system("pause");
}