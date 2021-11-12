#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <ctype.h>


void jogo(), desenho(erros), reiniciar();
int erros = 0, nivel = 0, fim = 0, k = 0;
char palavra[20], letra, palavraB[20], letrasSelecionadas[8];

//Auxiliares
int aux = 0, aux2 = 0, aux3 = 0;

int main(){

    printf("Seja bem vindo ao jogo da forca, para iniciar, digite uma palavra que sera utilizada para o jogo!\nObs: e necessario no minimo dois jogadores!\n\nPalavra: ");
    scanf("%s", &palavra);


    for(int i = 0; i < strlen(palavra); i++){
        palavraB[i] = '_';
    }

    printf("\n\nAgora selecione o nivel: \n\t(1) - Facil\n\t(2) - Medio\n\t(3) - Dificil\n\n\tNo nivel facil, voce pode errar 7 vezes, na oitava, voce perde!\n\tNo nivel medio, voce pode errar 4 vezes, na quinta, voce perde!\n\tNo nivel dificil, voce pode errar 2 vezes, na terceira, voce perde!\n\nEscolha: ");
    scanf("%d", &nivel);

    if(nivel == 1){
        printf("\n\nVoce selecionou nivel FACIL, portanto o limite sao 7 erros!");
        sleep(2);
        system("cls");
        jogo();
    }
    else if(nivel == 2){
        printf("\n\nVoce selecionou nivel MEDIO, portanto o limite sao 4 erros!");
        sleep(2);
        system("cls");
        jogo();
    }
    else{
        printf("\n\nVoce escolheu nivel DIFICIL, portanto o limite sao apenas 2 erros!");
        sleep(2);
        system("cls");
        jogo();
    }
}



void jogo(){

    while(fim != 1){

        if(strcmp(palavra, palavraB) == 0){
            fim = 1;
        }
        
        if(aux == 0){
            aux = 1;
            desenho(erros);
        }

        for(int i = 0; i < strlen(palavra); i++){

            printf(" %c ", palavraB[i]);
        }

        printf("\n\nEscolha uma letra: ");
        scanf("%s", &letra);

        for(int i = 0; i <= strlen(palavra); i++){

            if(palavra[i] == letra){
                palavraB[i] = letra;
                aux2 = 1;
            }
        }

        for(int i = 0; i < strlen(letrasSelecionadas); i++){
            if(letra == letrasSelecionadas[i]){
                aux3 = 1;
            }
        }
        letrasSelecionadas[k] = letra;
        k++;

        if(aux3 == 1){
            printf("\n\nEssa letra ja foi...\n\n");
            sleep(2);
            aux2 = 1;
        }

        if(aux2 == 0){
            erros++;
        }

        aux = 0;
        aux2 = 0;
        aux3 = 0;

        if(palavra == palavraB){
            fim = 1;
        }

    }

    //Depois do fim == 1
    system("cls");
    printf("Parabens, voce conseguiu!! A palavra era: %s", palavra);
    
    for(int i = 0; i < 2; i++){
        system("color A0");
        sleep(1);
        system("color 07");
        sleep(1);
    }

    printf("\n\nPara jogar novamente pressione qualquer tecla!\n\n");
    system("pause");
    reiniciar();
}

void desenho(erros){

    if(nivel == 1){

        system("cls");

        if(erros == 0){
            printf("|-------------\n|            |\n|            |\n|            |\n|            \n|\n|\n|\n|\n|\n|");
        }
        else if(erros == 1){
            printf("|-------------\n|            |\n|            |\n|            |\n|            O\n|\n|\n|\n|\n|\n|");
        }
        else if(erros == 2){
            printf("|-------------\n|            |\n|            |\n|            |\n|            O\n|          --|\n|\n|\n|\n|\n|");
        }
        else if(erros == 3){
            printf("|-------------\n|            |\n|            |\n|            |\n|            O\n|          --|--\n|\n|\n|\n|\n|");
        }
        else if(erros == 4){
            printf("|-------------\n|            |\n|            |\n|            |\n|            O\n|          --|--\n|            |\n|\n|\n|\n|");
        }
        else if(erros == 5){
            printf("|-------------\n|            |\n|            |\n|            |\n|            O\n|          --|--\n|            |\n|           | \n|\n|\n|");
        }
        else if(erros == 6){
            printf("|-------------\n|            |\n|            |\n|            |\n|            O\n|          --|--\n|            |\n|           | |\n|\n|\n|");
        }
        else if(erros == 7){
            printf("|-------------\n|            |\n|            |\n|            |\n|            O\n|          --|--\n|            |\n|           | |\n|           - \n|\n|");
        }
        else if(erros == 8){
            printf("|-------------\n|            |\n|            |\n|            |\n|            O\n|          --|--\n|            |\n|           | |\n|           - -\n|\n|");
            printf("\n\nVoce perdeu, acabaram suas chances. :(\n\nJogo reiniciando...");
            sleep(2);
            reiniciar();
        }

        jogo(0);
    }

    else if(nivel == 2){

        system("cls");

        if(erros == 0){
            printf("|-------------\n|            |\n|            |\n|            |\n|            \n|\n|\n|\n|\n|\n|");
        }
        else if(erros == 1){
            printf("|-------------\n|            |\n|            |\n|            |\n|            O\n|\n|\n|\n|\n|\n|");
        }
        else if(erros == 2){
            printf("|-------------\n|            |\n|            |\n|            |\n|            O\n|          --|--\n|\n|\n|\n|\n|");
        }
        else if(erros == 3){
            printf("|-------------\n|            |\n|            |\n|            |\n|            O\n|          --|--\n|            |\n|\n|\n|\n|");
        }
        else if(erros == 4){
            printf("|-------------\n|            |\n|            |\n|            |\n|            O\n|          --|--\n|            |\n|           | |\n|\n|\n|");
        }
        else if(erros == 5){
            printf("|-------------\n|            |\n|            |\n|            |\n|            O\n|          --|--\n|            |\n|           | |\n|           - -\n|\n|");
            
            printf("\n\nVoce perdeu, acabaram suas chances. :(\n\nJogo reiniciando...");
            sleep(2);
            reiniciar();
        }
    }

    else if(nivel == 3){

        system("cls");

        if(erros == 0){
            printf("|-------------\n|            |\n|            |\n|            |\n|            \n|\n|\n|\n|\n|\n|");
        }
        else if(erros == 1){
            printf("|-------------\n|            |\n|            |\n|            |\n|            O\n|\n|\n|\n|\n|\n|");
        }
        else if(erros == 2){
            printf("|-------------\n|            |\n|            |\n|            |\n|            O\n|          --|--\n|            |\n|\n|\n|\n|");
        }
        else if(erros == 3){
            printf("|-------------\n|            |\n|            |\n|            |\n|            O\n|          --|--\n|            |\n|           | |\n|           - -\n|\n|");
            
            printf("\n\nVoce perdeu, acabaram suas chances. :(\n\nJogo reiniciando...");
            sleep(2);
            reiniciar();
        }
    }
}

void reiniciar(){
    
    system("cls");

    erros = 0; 
    nivel = 0; 
    fim = 0;
    palavra[20] = "";
    letra;
    palavraB[20] = "";
    aux = 0; 
    aux2 = 0;
    aux3 = 0;
    letrasSelecionadas[8] = "";

    main();
}