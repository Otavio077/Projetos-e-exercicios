#include <stdio.h>
#include <stdlib.h>

void main(){

    int vetor[10] = {0};

    for (int i = 0; i < 10; i++){
        printf("%d - Digite um numero: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("\n\nVetor: ");

    for (int i = 0; i < 10; i++){
        printf("%d, ", vetor[i]);
    }

    printf("\n\nVetor inverso: ");

    for(int i = 0; i < 10; i++){
        printf("%d, ", vetor[10-(i+1)]);
    }
    
}