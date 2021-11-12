#include <stdio.h>
#include <stdlib.h>

/*Faça  um  Programa  que  peça  as  quatro  notas  de  10  alunos,  calcule  e armazene num vetor a média de cada aluno, 
imprima o número de alunos com média maior ou igual a 7.0.*/

int main() {
	
	int vetor[10] = {0}, i = 0, j = 0, nota = 0, soma = 0, mi7 = 0;
	
		for(i = 0; i < 10; i++){
			for(j = 0; j < 4; j++){
				printf("Digite a nota %d do aluno %d: ", j+1, i+1);
				scanf("%d", &nota);
				soma += nota;
				vetor[i] = soma / 4;
			}
			soma = 0;
			printf("\n");
		}
		
		printf("\n\nMedia dos alunos: ");
		for(i = 0; i < 10; i++){
			printf("%d, ", vetor[i]);
			if(vetor[i] >= 7){
				mi7++;
			}
		}
		
		printf("\n\nTivemos %d alunos com media maior ou igual a 7.", mi7);
		
		
	return 0;
}