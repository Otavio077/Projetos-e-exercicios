#include <stdio.h>
#include <stdlib.h>

/*Foram anotadas as idades e alturas de 30 alunos. 
Faça um Programa que determine quantos alunos com mais de 13 anos possuem altura inferior à média de altura desses alunos.*/

void main(){

    float idade[30] = {0}, altura[30] = {0}, mediaAltura = 0, h = 0;

        for(int i = 0; i < 30; i++){
            printf("Digite a idade da pessoa %d: ", i+1);
            scanf("%f", &idade[i]);
            printf("\nDigite a altura da pessoa %d: ", i+1);
            scanf("%f", &altura[i]);
            printf("\n\n");
        }

        printf("\n\nVetor idade: ");
        for(int i = 0; i < 30; i++){
            printf("%.0f, ", idade[i]);
        }
        printf("\n\nVetor altura: ");
        for(int i = 0; i < 30; i++){
            printf("%.0f, ", altura[i]);
        }

        for(int i = 0; i < 30; i++){
            mediaAltura += altura[i];
        }
        mediaAltura = mediaAltura / 30;

        for(int i = 0; i < 30; i++){
            if(idade[i] > 13 && altura[i] < mediaAltura){
                h++;
            }
        }

        printf("\n\nExistem %.0f alunos de 13 anos com altura inferior a media", h);
}