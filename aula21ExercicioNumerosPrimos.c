#include <stdio.h>
#include <stdlib.h>

int main()
{

printf("\n----UTILIZANDO for------");
for(int i=10;i<=20;i++){
        printf("\n%d",i);
        i++;
    }

printf("\n----UTILIZANDO While------");
int j=10;
while(j<=20){
    printf("\n%d",j);
    j = j +2;
}


printf("\n----UTILIZANDO Do While------");
int k = 10;
do{
    printf("\n%d",k);
    k = k + 2;
}while(k<=20);


printf("\n----UTILIZANDO NumerosPrimos------");

for(int i = 10;i<=20;i++){
        if(ePrimo(i)==1){
            printf("\n%d - E primo",i);
        }else
        printf("\n%d - ",i);
}

}


int ePrimo(int x){

    int i,divisores = 0;

    for(i = 1; i<= x; i++){
        if(x % i == 0)
            divisores++;
    }

    if(divisores == 2){
        return 1;
    }else{
        return 0;
    }
}





