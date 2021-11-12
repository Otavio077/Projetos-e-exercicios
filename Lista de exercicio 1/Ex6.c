#include <stdio.h>
#include <stdlib.h>

void main(){

    int num1 = 0;

        printf("Escreva o numero: ");
        scanf("%d", &num1);

        if(num1 >= 0){
            printf("\n\nPositivo");
        }
        else{
            printf("\n\nNegativo");
        }

}