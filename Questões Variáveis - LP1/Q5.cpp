#include <iostream>

/* Autora: Caroline Scherer
	Fun��o: programa que l� dois n�meros inteiros e imprime a soma */

int main(int argc, char** argv) {
	// declara��o de vari�veis
	int n1, n2, soma;
	
	// input dos numeros
	printf("Informe o primeiro numero: ");
	scanf("%d",&n1);
	printf("Informe o segundo numero: ");
	scanf("%d",&n2);
	
	// calculo da soma
	soma=n1+n2;
	
	// imprime soma
	printf("Soma: %d",soma);
	
	return 0;
}
