#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    float latas = 0, litros = 0, tamanhoM2 = 0;

        printf("Quantos M2 serao cobertos? ");
        scanf("%f", &tamanhoM2);

        litros = tamanhoM2 / 3;

        latas = litros / 18;

        printf("Total de latas necessarias: %.0f\nO preco e de: R$: %0.2f", ceil(latas), ceil(latas)*80);
}