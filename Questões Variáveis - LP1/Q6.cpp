#include <iostream>

/* Autora: Caroline Scherer
	Fun��o: programa l� 3 n�meros inteiros e informa o resultado de sua multiplica��o */

int main(int argc, char** argv) {
	// declara��o de vari�veis
	int n1, n2, n3, mult;
	
	// input de numeros
	printf("Informe o primeiro numero: ");
	scanf("%d",&n1);
	printf("Informe o segundo numero: ");
	scanf("%d",&n2);
	printf("Informe o terceiro numero: ");
	scanf("%d",&n3);
	
	// calculo de multiplica��o
	mult=n1*n2*n3;
	
	// imprime resultado
	printf("O valor da multiplica�ao dos numeros eh: %d",mult);
	
	return 0;
}
