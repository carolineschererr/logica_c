#include <iostream>

/* Autora: Caroline Scherer
	Fun��o: l� n�mero e informa se � par/�mpar, positivo/negativo */

int main(int argc, char** argv) {
	// declara��o de vari�veis
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
