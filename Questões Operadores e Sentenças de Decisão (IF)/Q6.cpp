#include <iostream>

/* Autora: Caroline Scherer
	Função: lê número e informa se é par/ímpar, positivo/negativo */

int main(int argc, char** argv) {
	// declaração de variáveis
	int numero;
	
	// entrada de numero
	printf("Informe um numero inteiro: ");
	scanf("%d",&numero);
	
	// estrutura if-else
	if (numero > 0 && numero %2 == 0) { // classifica numero
		printf("Numero positivo e par.");	// imprime numero
	} else if (numero > 0 && numero%2 != 0) {
		printf("\nNumero positivo e impar.");
	} else if (numero < 0 && numero %2 == 0) {
		printf("\nNumero negativo e par.");
	} else if (numero < 0 && numero %2 != 0) {
		printf("\nNumero negativo e impar.");
	}
	
	return 0;
}
