#include <stdio.h>
#include <stdlib.h>

/*Faça um Programa que leia dois vetores com 10 elementos cada. Gere um terceiro vetor de 20 elementos, 
cujos valores deverão ser compostos pelos elementos intercalados dos dois outros vetores.*/

void main(){

    int vetor[10] = {0}, vetor2[10] = {0};

    for(int i = 0; i < 10; i++){
        printf("Digite o valor %d do primeiro vetor: ", i+1);
        scanf("%d", &vetor[i]);
        printf("\n");
    }

    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("Digite o valor %d do segundo vetor: ", i+1);
        scanf("%d", &vetor2[i]);
        printf("\n");
    }

    printf("\n\nVetor 1: \n");
    for(int i = 0; i < 10; i++){
        printf("%d, ", vetor[i]);
    }
    printf("\n\nVetor 2: \n");
    for(int i = 0; i < 10; i++){
        printf("%d, ", vetor2[i]);
    }

    printf("\n\nVetor 1 intercalado com o 2: \n");
    for(int i = 0; i < 10; i++){
        printf("%d, ", vetor[i]);
        printf("%d, ", vetor2[i]);
    }

}