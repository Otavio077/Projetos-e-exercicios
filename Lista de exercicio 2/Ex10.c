#include <stdio.h>
#include <stdlib.h>

/*10.Utilizando listas faça um programa que faça 5 perguntas para uma pessoa sobre um crime. 
As perguntas são:
1."Telefonou para a vítima?"
2."Esteve no local do crime?"
3."Mora perto da vítima?"
4."Devia para a vítima?"
5."Já trabalhou com a vítima?"
O programa deve no final emitir uma classificação sobre a participação da pessoa no crime. 
Se a pessoa responder  positivamente  a  2  questões  ela  deve  ser  classificada como   "Suspeita", 
entre   3   e   4   como   "Cúmplice"   e   5   como"Assassino". Caso contrário, ele será classificado como "Inocente".*/

void main(){

    int resposta[5] = {0}, total = 0;

    printf("Digite 1 para SIM e 0 para NAO.");

    printf("\n\nTelefonou para a vitima? ");
    scanf("%d", &resposta[0]);

    printf("\n\nEsteve no local do crime? ");
    scanf("%d", &resposta[1]);

    printf("\n\nMora perto da vitima? ");
    scanf("%d", &resposta[2]);

    printf("\n\nDevia para a vitima? ");
    scanf("%d", &resposta[3]);

    printf("\n\nJa trabalhou para a vitima? ");
    scanf("%d", &resposta[4]);

    for(int i = 0; i < 5; i++){
        if(resposta[i] == 1){
            total++;
        }
    }

    switch(total+1){

        case 1:
        printf("\n\nINOCENTE");
        break;

        case 2:
        printf("\n\nSUSPEITO");
        break;

        case 3:
        printf("\n\nCUMPLICE");
        break;

        case 4:
        printf("\n\nCUMPLICE");
        break;

        case 5: 
        printf("\n\nASSASSINO");
        break;

    }
    
}