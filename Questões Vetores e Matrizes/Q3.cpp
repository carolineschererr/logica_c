#include <iostream>
#include <stdio.h>

/* Autora: Caroline Scherer
	Fun��o: l� 10 n�meros reais e apresenta a multiplica��o */

int main(int argc, char** argv) {
	//declaracao de variaveis
	float numero[10], mult=1;
	int i;
	
	//entrada de numeros	
	for (i=0; i <10; i++){
		printf("\nEntre com o %d numero: ",i);
		scanf("%f",&numero[i]);
		mult=mult*numero[i];	
	}
	
	printf("\nMultiplicacao: �%f",mult);
	
	return 0;
}

/*
3 - Escreva um programa que leia 10 n�meros reais. Apresente o resultado da  multiplica��o destes. 
*/
