#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int nota = 0;

    do{
        printf("Digite a nota: ");
        scanf("%d", &nota);
        printf("\n");
        if(nota < 0 || nota > 10){
            printf("\nNota invalida, insire entre 0 e 10\n");
        }
    }while(nota < 0 || nota > 10);

    printf("\n\nNota aceita");
}