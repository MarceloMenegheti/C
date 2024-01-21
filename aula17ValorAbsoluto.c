#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a,b,r;

    printf("\nola informe a primeira nota: ");
    scanf("%d",&a);
    printf("\nola informe a segunda nota: ");
    scanf("%d",&b);

    r = a - b;
    printf("\nA diferancas das notas eh %d e valor absoluto das notas sao: %d",r,abs(r));

    int c,d,e,J;
    printf("\nINFORME:");
    scanf("%d %d %d",&c,&d,&e);

    J= c*d*e;

    printf("\nO valor da multiplicacao eh: %d",J);


    return 0;

}
