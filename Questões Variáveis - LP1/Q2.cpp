#include <iostream>


/* Autora: Caroline Scherer
	Programa que l� e calcula a m�dia ponderada de 4 notas. */

int main(int argc, char** argv) {
	
	//declara���o de vari�veis
	float n1, n2, n3, n4, media;
	
	// leitura das 4 notas	
	printf("Informe a nota 1: ");
	scanf("%f",&n1);
	printf("Informe a nota 2: ");
	scanf("%f",&n2);
	printf("Informe a nota 3: ");
	scanf("%f",&n3);
	printf("Informe a nota 4: ");
	scanf("%f",&n4);
	
	// calculo da media ponderada
	media=(1*n1 + 2*n2 + 3*n3 + 4*n4)/(1+2+3+4);
	
	//impressao da media ponderada
	printf("Media ponderada: %f",media);
	
	return 0;
}
