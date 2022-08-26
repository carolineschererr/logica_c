#include <iostream>

/* Autora: Caroline Scherer
	Função: programa que recebe valor em reais, converte e imprime valor em dólares com base na cotação do dia */

int main(int argc, char** argv) {
	// declaração de variáveis
	float valor_reais, cotacao, valor_dolares;
	
	// input de valores
	printf("Informe o valor em reais: ");
	scanf("%f",&valor_reais);
	printf("Informe a cotacao do dia: ");
	scanf("%f",&cotacao);
	
	// calculo de conversão real-dólar
	valor_dolares=(valor_reais/cotacao);
	
	//imprime valor convertido
	printf("Valor em dolares: %.f",valor_dolares);
	
	return 0;
}
