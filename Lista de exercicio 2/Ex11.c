#include <stdio.h>
#include <stdlib.h>

/*Faça  um  programa  que  leia  um  número  indeterminado  de  valores, 
correspondentes  a  notas,  encerrando  a  entrada  de  dados  quando  for informado um valor igual a 
-1 (que não deve ser armazenado). Após esta entrada de dados, faça:
1.Mostre a quantidade de valores que foram lidos;
2.Exiba todos os valores na ordem em que foram informados, um ao lado do outro;
3.Exiba todos os valores na ordem inversa à que foram informados, um abaixo do outro;
4.Calcule e mostre a soma dos valores;
5.Calcule e mostre a média dos valores;
6.Calcule  e  mostre  a  quantidade  de  valores   acima   da  média calculada;
7.Calcule e mostre a quantidade de valores abaixo de sete;
8.Encerre o programa com uma mensagem;*/

int i = 0, j = 0, soma = 0, media = 0, mc = 0, ab7 = 0;

void main(){

    int notas[] = {0}, filtro = 0;

        do{
            printf("Digite a nota %d: ", i+1);
            scanf("%d", &filtro);
            if(filtro != -1){
                notas[i] = filtro;
                i++;
            }
        }while(filtro != -1);

            printf("\n\nForam lidos %d valores:\n\n", i);
            for(j = 0; j < i; j++){
                printf("%d, ", notas[j]);
            }

            printf("\n\nValores na ordem inversa:\n\n");
            for(j = i-1; j >= 0; j--){
                printf("%d\n", notas[j]);
            }

            for(j = 0; j < i; j++){
                soma += notas[j];
            }
            printf("\n\nSoma das notas: %d", soma);

            media = soma / i;
            printf("\n\nMedia: %d", media);


            printf("\n\nValores acima da media: ");
            for(j = 0; j < i; j++){
                if(notas[j] > media){
                    printf("%d, ", notas[j]);
                    mc++;
                }
            }
            printf("\nTotal de: %d", mc);
            
            printf("\n\nValores abaixo de sete: ");
            for(j = 0; j < i; j++){
                if(notas[j] < 7){
                    printf("%d, ", notas[j]);
                    ab7++;
                }
            }
            printf("\nTotal de: %d", ab7);

            printf("\n\nFim do programa!");

}