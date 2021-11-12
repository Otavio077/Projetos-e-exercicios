#include <stdio.h>
#include <stdlib.h>

void main(){

    int num1 = 0, num2 = 0;

        printf("Escreva o primeiro numero: ");
        scanf("%d", &num1);
        printf("\n\nEscreva o segundo numero: ");
        scanf("%d", &num2);

        if(num1 > num2){
            printf("\n\n%d", num1);
        }
        else{
            printf("\n\n%d", num2);
        }

}