#include <stdio.h>
#include <stdlib.h>

/*Faça  um  Programa  que  leia  20  números  inteiros  e  armazene-os num vetor. Armazene os números pares no vetor PAR
 e os números IMPARES no vetor impar. Imprima os três vetores.*/

int main() {
	
	int vetor[20] = {0};
	
		for(int i = 0; i < 20; i++){
			printf("%d - Digite um numero: ", i+1);
			scanf("%d", &vetor[i]);
			printf("\n");
		}

        printf("\n\nVetor: ");
        for(int i = 0; i < 20; i++){
            printf("%d, ", vetor[i]);
        }

        printf("\n\nVetor par: ");
        for(int i = 0; i < 20; i++){
            if(vetor[i] % 2 == 0){
                printf("%d, ", vetor[i]);
            }
        }

        printf("\n\nVetor impar: ");
        for(int i = 0; i < 20; i++){
            if(vetor[i] % 2 != 0){
                printf("%d, ", vetor[i]);
            }
        }
		
	return 0;
}