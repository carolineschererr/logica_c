#include <iostream>

/* Autora: Caroline Scherer
	Função: programa lê 3 números inteiros e informa o resultado de sua multiplicação */

int main(int argc, char** argv) {
	// declaração de variáveis
	int n1, n2, n3, mult;
	
	// input de numeros
	printf("Informe o primeiro numero: ");
	scanf("%d",&n1);
	printf("Informe o segundo numero: ");
	scanf("%d",&n2);
	printf("Informe o terceiro numero: ");
	scanf("%d",&n3);
	
	// calculo de multiplicação
	mult=n1*n2*n3;
	
	// imprime resultado
	printf("O valor da multiplicaçao dos numeros eh: %d",mult);
	
	return 0;
}
