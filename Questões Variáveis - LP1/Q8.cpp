#include <iostream>

/* Autora: Caroline Scherer
	Fun��o: programa que recebe valor em reais, converte e imprime valor em d�lares com base na cota��o do dia */

int main(int argc, char** argv) {
	// declara��o de vari�veis
	float valor_reais, cotacao, valor_dolares;
	
	// input de valores
	printf("Informe o valor em reais: ");
	scanf("%f",&valor_reais);
	printf("Informe a cotacao do dia: ");
	scanf("%f",&cotacao);
	
	// calculo de convers�o real-d�lar
	valor_dolares=(valor_reais/cotacao);
	
	//imprime valor convertido
	printf("Valor em dolares: %.f",valor_dolares);
	
	return 0;
}
