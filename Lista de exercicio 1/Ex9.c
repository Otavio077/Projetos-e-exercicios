#include <stdio.h>
#include <stdlib.h>

void main(){

    int num[5] = {0}, soma = 0, media = 0;


        for (int i = 0; i < 5; i++){
            printf("%d - Escreva o numero: ", i+1);
            scanf("%d", &num[i]);
            printf("\n\n");

            soma += num[i];
        }

    media = soma / 5;

    printf("\n\nA soma e: %d\nA media e: %d", soma, media);
}