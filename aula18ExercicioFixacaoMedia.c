#include <stdio.h>
#include <stdlib.h>

int main()
{
    float primeiraNota,segundaNota,terceiraNota,media;

    printf("\nInforme a primeira nota: ");
    scanf("%f",&primeiraNota);

    printf("\nInforme a segunda nota: ");
    scanf("%f",&segundaNota);

    printf("\nInforme a terceira nota: ");
    scanf("%f",&terceiraNota);

    media = (primeiraNota+segundaNota+terceiraNota)/3;
    if(media>=7){
        printf("\nPassou uhhhu!! sua media foi %.2f\n",media);
    }else{
        printf("\nReprovado!sua media foi %.2f\n",media);
    }

    return 0;
}
