#include <iostream>

/* Autora: Caroline Scherer
	Fun��o: l� 10 n�meros inteiros. Escreve os 10 na ordem correta e depois na ordem inversa */

int main(int argc, char** argv) {
	int numero[10];
	int i;
	
	//entrar com os 10 numeros
	for (i=0; i < 10; i++) {
		printf("\nInforme o %d numero: ",i);
		scanf("%d",&numero[i]);
	}
	
	//imprime em ordem crescente
	printf("\nOrdem crescente: ");
	for (i=0; i <10; i++){
		printf("\n%d",numero[i]);
	}
	
	//imprime em ordem decrescente
	printf("\nOrdem decrescente: ");	
	for (i=9; i >= 0; i--){
		printf("\n%d",numero[i]);
	}
	
	return 0;
}

/*
1 - Escreva um programa que leia 10 n�meros inteiros. 
Escrevas os 10 n�meros na ordem correta e depois os 10 n�meros na ordem inversa (da posi��o 10 para a primeira). 
*/
