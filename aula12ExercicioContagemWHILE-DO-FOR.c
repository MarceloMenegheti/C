#include <stdio.h>
#include <stdlib.h>

int main()
{
//utilizando o For
for(int i = 10;i>=0;i--){
    printf("\n%d",i);
}

printf("\n");

//utilizando o while
int j = 10;
while(j>=0){
    printf("\n%d",j);
    j--;
}


printf("\n");

//utilizando o Do-While
int k=10;
do{
    printf("\n%d",k);
    k--;
}while(k>=0);

}
