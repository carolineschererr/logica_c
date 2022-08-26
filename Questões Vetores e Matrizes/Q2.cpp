#include <iostream>
#include <stdio.h>

/* Autora: Caroline Scherer
	Função: programa lê 10 números inteiros e apresenta soma */

int main(int argc, char** argv) {
	int numero[10], i, soma;
	
	for (i=0; i < 10; i++){
		printf("\nDigite o %d numero: ",i);
		scanf("%d",&numero[i]);
		soma=soma+(numero[i]);
	}
	
	printf("\nSoma dos numeros: %d",soma);
	
	return 0;
}

/*
2 - Escreva um programa que leia 10 números inteiros. Apresente a soma dos 10 números. 
*/

