#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba a temperatura média de cada mês do ano e 
armazene-as  em  uma  lista.  Após  isto,  calcule  a  média  anual  
das temperaturas  e  mostre  todas  as  temperaturas  acima  da  média  anual, 
e em que mês elas ocorreram (mostrar o mês por extenso: 1 –Janeiro, 2 –Fevereiro, . . . ).*/

void mes(int mes);

void main(){

    int tempMedia[12] = {0}, mediaAnual = 0;

    for(int i = 0; i < 12; i++){
        printf("Digite a temperatura media do mes de ");
        mes(i+1);
        printf(": ");
        scanf("%d", &tempMedia[i]);
        printf("\n");
    }
    
    for(int i = 0; i < 12; i++){
        mediaAnual += tempMedia[i];
    }
    mediaAnual = mediaAnual / 12;
    printf("\n\nA temperatura media anual foi de: %d", mediaAnual);

    printf("\n\nAs temperaturas acima da media anual ocorreram em: ");
    for(int i = 0; i < 12; i++){
        if(tempMedia[i] > mediaAnual){
            printf("\n");
            mes(i+1);
            printf(" - %d graus", tempMedia[i]);
        }
    }

}

void mes(int mes){

    switch(mes){

        case 1:
        printf("janeiro");
        break;
        
        case 2:
        printf("fevereiro");
        break;
        
        case 3:
        printf("marco");
        break;
        
        case 4:
        printf("abril");
        break;
        
        case 5:
        printf("maio");
        break;
        
        case 6:
        printf("junho");
        break;
        
        case 7:
        printf("julho");
        break;
        
        case 8:
        printf("agosto");
        break;
        
        case 9:
        printf("setembro");
        break;
        
        case 10:
        printf("outubro");
        break;
        
        case 11:
        printf("novembro");
        break;
        
        case 12:
        printf("dezembro");
        break;
        
    }
}