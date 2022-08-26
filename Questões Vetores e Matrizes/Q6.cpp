#include <iostream>
#include <stdio.h>
#include <string.h>

/* Autora: Caroline Scherer
	Função: lê valor inteiro em reais e calcula qual o menor número de notas em que o valor pode ser entregue ao cliente. Escreve as notas necessárias */

int main(int argc, char** argv) {
	int valor, i, notas[] = {100, 50, 20, 10, 5, 2, 1};
	
	//entrada de valor
	printf("\nDigite o valor: ");
	scanf("%d",&valor);
	
	//calculo com laço
	for (i=0; i < 7; i++){
		printf("%d cedulas de R$ %d.00\n",valor/notas[i],notas[i]);
		valor=valor-((valor/notas[i])*(notas[i]));
	}
	
	
	return 0;
}

/*
int main(int argc, char *argv[]) {
	int notas[]={100,50,20,10,5,2,1};
	int valor,cont;
	printf("Digite o valor do saque: ");
	scanf("%d",&valor);
	for(cont=0;cont<7;cont++){
	  printf("%d cedulas de R$%d.00\n",valor/notas[cont],notas[cont]);
	  valor = valor - ((valor/notas[cont])*(notas[cont]));
	}
	
*/




/* 6- CAIXA ELETRÔNICO. 

Escrever um programa que lê um valor inteiro em reais 
e calcula qual o menor número possível de notas de 100, 50, 20, 10, 5, 2 e 1 
em que o valor lido pode ser entregue ao cliente. 

Escrever a relação de notas necessárias. 
Utilize um vetor para armazenar o valor de cada tipo de nota. 
Notas = {100, 50, 20, 10, 5, 2, 1}
*/
