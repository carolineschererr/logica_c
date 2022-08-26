#include <iostream>

/* Autora: Caroline Scherer
	Função: Programa que lê 4 notas, o peso delas e informa a média */

int main(int argc, char** argv) {
	//declaração de variáveis
	float n1, n2, n3, n4, p1, p2, p3, p4, media;
	
	//entrada de notas
	printf("Informe a nota 1: ");
	scanf("%f",&n1);
	printf("Informe a nota 2: ");
	scanf("%f",&n2);
	printf("Informe a nota 3: ");
	scanf("%f",&n3);
	printf("Informe a nota 4: ");
	scanf("%f",&n4);
	
	//entrada dos pesos
	printf("Informe o peso 1: ");
	scanf("%f",&p1);
	printf("Informe o peso 2: ");
	scanf("%f",&p2);
	printf("Informe o peso 3: ");
	scanf("%f",&p3);
	printf("Informe o peso 4: ");
	scanf("%f",&p4);
	
	//calcula a media
	media=(p1*n1 + p2*n2 + p3*n3 + p4*n4)/(p1+p2+p3+p4);
	
	//imprime resultado
	printf("Media: %f",media);
	
	return 0;
}
