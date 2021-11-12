#include <stdio.h>
#include <stdlib.h>

void main(){

    int num1 = 0, num2 = 0, aux = 0, soma = 0;

        printf("Escreva o primeiro numero: ");
        scanf("%d", &num1);
        printf("\n\nEscreva o segundo numero: ");
        scanf("%d", &num2);

        if(num1 > num2){
            aux = num1;
            num1 = num2;
            num2 = aux;
        }

        for (int i = num1; i <= num2; i++){
            
            printf("%d, ", num1);
            soma += num1;
            num1++;
        }
        
        printf("\n\nA soma e de: %d", soma);

}