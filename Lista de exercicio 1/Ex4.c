#include <stdio.h>
#include <stdlib.h>

void main(){

    int salarioFixo = 0, totalDeVendas = 0, comissao = 0, salarioFinal = 0;

        printf("Digite seu salario: R$");
        scanf("%d", &salarioFixo);

        printf("\n\nQual foi o valor de suas vendas?\n");
        scanf("%d", &totalDeVendas);


        if(totalDeVendas <= 1500){

            salarioFinal = salarioFixo + totalDeVendas * 0.03;   
        }

        else{

            salarioFinal = salarioFixo + 1500 * 0.03 + (totalDeVendas - 1500) * 0.05;
        }


        printf("\nSeu salario final e de: R$%d", salarioFinal);
}
