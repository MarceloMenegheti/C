#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    printf("\nola informe a primeira nota do aluno Joao: ");
    scanf("%f",&a);
    printf("\nola informe a primeira nota do aluno Marcelo: ");
    scanf("%f",&b);

    printf("\nA nota do Joao eh %f e do Marcelo eh %f\n",a,b);
    printf("\nA media da turma eh: %f\n\n",(a+b)/2);
    return 0;
}
