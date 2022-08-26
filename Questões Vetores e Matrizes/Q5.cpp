#include <iostream>
#include <stdio.h>
#include <string.h>

/* Autora: Caroline Scherer
	Função: recebe nota de 10 alunos. Calcula media da classe, quantidade de aprovados e quantidade de reprovados */

int main(int argc, char** argv) {
	float nota[10], soma, media;
	int i, aprovado, reprovado;
	
	//le notas no vetor
	for (i=0; i<10; i++){
		printf("\nEntre com a nota do %d aluno: ",i);
		scanf("%f",&nota[i]);
		
	// soma notas
		soma=soma+nota[i];
		
		if (nota[i] >= 7){
			aprovado=aprovado+1;
		} else if (nota[i] < 7){
			reprovado=reprovado+1;
		}
	
	}
	//media das notas
	media=soma/10;
	
	printf("\nAprovados: %d",aprovado);
	printf("\nReprovados: %d",reprovado);
	printf("\nMedia da classe: %f",media);
	
	return 0;
}

/*
5 - Faça um programa que recebe a nota de 10 alunos e armazene as notas em um vetor. Calcule:

a - a média da classe

b - a quantidade de alunos aprovados, com média =7

c - a quantidade de alunos reprovados.
*/
