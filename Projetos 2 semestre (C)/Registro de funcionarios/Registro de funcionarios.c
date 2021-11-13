#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void inicio(), registro(), funcionario(), busca(), opcoes(int funcionario), listagem(), editarFuncionario(int funcionario), excluirFuncionario(int funcionario);

int qtd = -1, opcao = 0, idadeFuncionario[99] = {0}, registroFuncionario[99] = {0};

char funcionarios[99][99] = {""}, generoFuncionario[99] = {""};

float salarioFuncionario[99] = {0};

  int main(){

      inicio();
}

void inicio(){

    system("cls");
    printf("Seja bem vindo ao sistema de registro de funcionarios!\n\n");

    if(qtd == -1){
        registro();
    }
    else{
        printf("O que deseja fazer? ");
        printf("\n\n\t1 - Registrar um novo funcionario");
        printf("\n\t2 - Editar / exibir informacoes de um funcionario");
        printf("\n\t3 - Listar os funcionarios");
        printf("\n\t0 - Sair\n\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if(opcao == 1){
            registro();
        }
        else if(opcao == 2){
            busca();
        }
        else if(opcao == 3){
            listagem();
        }
        else{
            exit(0);
        }
    }
}

void registro(){

    int num = 0;
    system("cls");
    if(qtd == -1){
        printf("Seja bem vindo ao sistema de registro de funcionarios!\nPara comecar, vamos registrar os funcionarios.\n\n");
    }

    printf("Digite quantos funcionarios deseja registrar: ");
    scanf("%d", &num);

    if(num <= 0){
        system("cls");
        num = 0;
        printf("Quantidade invalida, pressione qualquer tecla para voltar ao inicio...\n\n");
        system("pause");
        inicio();
    }

    printf("\n\n");

    for(int i = 0; i < num; i++){

        qtd++;

        printf("%d - Digite o nome do(a) funcionario(a): ", qtd+1);
        scanf("%s", &funcionarios[qtd]);

        //printf("%s", funcionarios[qtd]);
        
        printf("\n\n%d - Digite o genero do funcionario (M - Masculino ou F - Feminino): ", qtd+1);
        scanf("%s", &generoFuncionario[qtd]);

        //printf(" %c", generoFuncionario[qtd]);

        printf("\n\n%d - Digite a idade do funcionario(a): ", qtd+1);
        scanf("%d", &idadeFuncionario[qtd]);

        //printf("%d", idadeFuncionario[qtd]);

        printf("\n\n%d - Digite o salario do(a) funcionario(a) em reais: R$", qtd+1);
        scanf("%f", &salarioFuncionario[qtd]);

        //printf("%f", salarioFuncionario[qtd]);

        registroFuncionario[qtd] = qtd+1;

        printf("\n\nFuncionario registrado! Numero de registro: %d\nAperte qualquer tecla para continuar...\n\n", qtd+1);

        system("pause");
        system("cls");
    }
    inicio();
}

void busca(){
    int busca = 0, erro = 1;
    char nome[99];
    system("cls");

    printf("1 - Ja sei o numero de registro do funcionario.\n2 - Nao sei o numero de registro.\n\nEscolha: ");
    scanf("%d", &busca);

    if(busca == 1){
        printf("\n\nDigite o numero de registro do funcionario: ");
        scanf("%d", &busca);
        busca -= 1;
        erro = 0;
    }
    else{
        printf("\n\nDigite o nome do funcionario: ");
        scanf("%s", &nome);
        printf("\nBuscando por: %s\n\n", nome);
        sleep(1);

        for(int i = 0; i <= qtd; i++){
            if (strcmp(funcionarios[i], nome) == 0){
                busca = i;
                erro = 0;
                break;
             }
         }
    }

    if(erro == 1 || registroFuncionario[busca] == 0){
        system("cls");
        printf("Usuario nao encontrado...\n\n");
        system("pause");
        inicio();
    }

    system("cls");
    printf("Funcionario selecionado: %s\n\tGenero -  %c\n\tIdade - %d\n\tSalario - %.2f\n\tRegistro - %d\n\n", funcionarios[busca], generoFuncionario[busca], idadeFuncionario[busca], salarioFuncionario[busca], registroFuncionario[busca]);
    opcoes(busca);
}

void listagem(){

    system("cls");
    printf("Lista de funcionarios:\n\n");

    for(int i = 0; i <= qtd; i++){
        if(registroFuncionario[i] == 0){
        }
        else{
            printf("Funcionario: %s,    Registro: %d\n", funcionarios[i], registroFuncionario[i]);
        }
    }

    printf("\n\nAperte qualquer tecla para voltar ao incio.\n\n");
    system("pause");
    inicio();
}


void opcoes(int funcionario){

    char choose;

    printf("\n\nO que deseja fazer?\n");
    printf("\t1 - Editar os dados;");
    printf("\n\t2 - Excluir funcionario;");
    printf("\n\t3 - Voltar ao inicio;");
    printf("\n\nEscolha: ");
    scanf("%d", &choose);

    if(choose == 1){
        editarFuncionario(funcionario);
    }
    else if(choose == 2){
        excluirFuncionario(funcionario);
    }
    else{
        inicio();
    }
}

void editarFuncionario(int funcionario){

    char escolha;

    system("cls");
    printf("Deseja alterar o nome? (S ou N)\nEscolha: ");
    scanf(" %c", &escolha);
    escolha = tolower(escolha);

    if(escolha == 's'){

        printf("Digite o nome do(a) funcionario(a): ");
        scanf("%s", &funcionarios[funcionario]);
        printf("\n\nAlterado!");
        sleep(1);
    }

    system("cls");
    printf("Deseja alterar o genero? (S ou N)\nEscolha: ");
    scanf(" %c", &escolha);
    escolha = tolower(escolha);

    if(escolha == 's'){

        printf("\n\nDigite o genero do funcionario (M - Masculino ou F - Feminino: ");
        scanf("%s", &generoFuncionario[funcionario]);
        printf("\n\nAlterado!");
        sleep(1);
    }

    system("cls");
    printf("Deseja alterar a idade? (S ou N)\nEscolha: ");
    scanf(" %c", &escolha);
    escolha = tolower(escolha);

    if(escolha == 's'){

        printf("\n\nDigite a idade do funcionario(a): ");
        scanf("%d", &idadeFuncionario[funcionario]);
        printf("\n\nAlterado!");
        sleep(1);
    }

    system("cls");
    printf("Deseja alterar o salario? (S ou N)\nEscolha: ");
    scanf(" %c", &escolha);
    escolha = tolower(escolha);

    if(escolha == 's'){

        printf("\n\nDigite o salario do(a) funcionario(a) em reais: R$");
        scanf("%f", &salarioFuncionario[funcionario]);
        printf("\n\nAlterado!");
        sleep(1);
    }

    system("cls");
    printf("Tudo pronto, retornando ao inicio!");
    sleep(2);
    inicio();
}

void excluirFuncionario(int funcionario){

    char escolha;

    system("cls");
    printf("Tem certeza que deseja excluir esse funcionario? (S - Sim / N - Nao)\nEscolha: ");
    scanf(" %c", &escolha);

    escolha = tolower(escolha);

    if(escolha == 's'){

        //for(int i = funcionario; i <= qtd; i++){
            registroFuncionario[funcionario] = 0;
        //}
    }

    printf("\nFuncionario excluido!\n\nVoltando ao inicio...\n\n");
    sleep(2);
    inicio();
}