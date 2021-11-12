#include <stdio.h>
#include <stdlib.h>

/*Altere o programa anterior, intercalando 3 vetores de 10 elementos cada.*/

void main(){

int vetor[10] = {0}, vetor2[10] = {0}, vetor3[10] = {0};

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

    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("Digite o valor %d do terceiro vetor: ", i+1);
        scanf("%d", &vetor3[i]);
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
    printf("\n\nVetor 3: \n");
    for(int i = 0; i < 10; i++){
        printf("%d, ", vetor3[i]);
    }

    printf("\n\nVetor 1 intercalado com o 2 e 3: \n");
    for(int i = 0; i < 10; i++){
        printf("%d, ", vetor[i]);
        printf("%d, ", vetor2[i]);
        printf("%d, ", vetor3[i]);
    }

}