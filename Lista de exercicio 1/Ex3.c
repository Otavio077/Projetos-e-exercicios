#include <stdio.h>
#include <stdlib.h>

void main(){

    int nota[2] = {0}, media = 0;

    for (int i = 0; i < 2; i++){
        printf("%d - Digite a nota: ", i+1);
        scanf("%d", &nota[i]);
        printf("\n");
    }

    media = (nota[0] + nota[1]) / 2;

    if(media >= 7){
        printf("\nAprovado");
    }
    else{
        printf("\nReprovado");
    }
    
    
}