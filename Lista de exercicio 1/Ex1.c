#include <stdio.h>
#include <stdlib.h>

void main(){

    int horasMensais = 0, salarioHora = 0, salarioBruto = 0, INSS = 0, sindicato = 0, salarioLiquido = 0;

    printf("Quantas horas voce trabalhou no mes? ");
    scanf("%d", &horasMensais);

    printf("\n\nQual o seu salario hora? ");
    scanf("%d", &salarioHora);

    salarioBruto = horasMensais * salarioHora;

    INSS = salarioBruto*0.08;

    sindicato = salarioBruto*0.11;

    salarioLiquido = salarioBruto - sindicato - INSS;

    printf("\n\nO salario bruto foi de: R$%d\nO INSS foi de: R$%d\nO sindicato foi de: R$%d\nO salario liquido foi de: R$%d", salarioBruto, INSS, sindicato, salarioLiquido);
}