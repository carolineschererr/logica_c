#include <iostream>

/* Autora: Caroline Scherer
	Fun��o: programa l� 3 n�meros e retorna o maior */

int main(int argc, char** argv) {
	// declara��o de vari�veis
	int n1, n2, n3, maior;
	
	// entrada dos n�meros
	printf("Informe o n�mero 1: ");
	scanf("%d",&n1);
	printf("Informe o n�mero 2: ");
	scanf("%d",&n2);
	printf("Informe o n�mero 3: ");
	scanf("%d",&n3);
	
	// inicializa o maior
	maior=0;
	
	if (n1 > maior) {
		maior=n1;
	} if (n2 > maior) {
		maior=n2;
	} if (n3 > maior) {
		maior=n3;
	}
	
	// retorno
	printf("Maior numero: %d",maior);
	
	return 0;
}
