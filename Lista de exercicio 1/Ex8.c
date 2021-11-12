#include <stdio.h>
#include <stdlib.h>

void main(){

    int num[5] = {0}, maiorNumero = 0;


        for (int i = 0; i < 5; i++){
            printf("%d - Escreva o numero: ", i+1);
            scanf("%d", &num[i]);
            printf("\n\n");
        }

        for (int i = 0; i < 5; i++){
            for (int j = i+1; j < 5; j++){
                
                if(num[i] > num[j] && maiorNumero < num[i]){
                    maiorNumero = num[i];
                }
            }
        }
        
    printf("\n\nMaior numero: %d", maiorNumero);

}