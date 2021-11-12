#include <stdio.h>
#include <stdlib.h>

/*Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada informação 
no seu respectivo vetor. Imprima a idade e  a altura na ordem inversa a ordem lida.*/

void main(){

    float idade[5] = {0}, altura[5] = {0};

        for(int i = 0; i < 5; i++){
            printf("Digite a idade da pessoa %d: ", i+1);
            scanf("%f", &idade[i]);
            printf("\nDigite a altura da pessoa %d: ", i+1);
            scanf("%f", &altura[i]);
            printf("\n\n");
        }

        printf("\n\nVetor idade: ");
        for(int i = 0; i < 5; i++){
            printf("%.0f, ", idade[i]);
        }
        printf("\n\nVetor altura: ");
        for(int i = 0; i < 5; i++){
            printf("%.0f, ", altura[i]);
        }
        
        printf("\n\nVetor idade inverso: ");
        for(int i = 4; i > -1; i--){
            printf("%.0f, ", idade[i]);
        }
        printf("\n\nVetor altura inverso: ");
        for(int i = 4; i > -1; i--){
            printf("%.0f, ", altura[i]);
        }
}