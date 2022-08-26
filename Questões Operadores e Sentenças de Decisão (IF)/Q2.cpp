#include <iostream>

/* Autora: Caroline Scherer
	Função: programa lê 4 notas, calcula media ponderada e imprime se aluno foi aprovado/reprovado e o valor da media */

int main(int argc, char** argv) {
	// declaração de variáveis
	float n1, n2, n3, n4, media;
	
	// input de notas
	printf("Informe a nota 1: ");
	scanf("%f",&n1);
	printf("Informe a nota 2: ");
	scanf("%f",&n2);
	printf("Informe a nota 3: ");
	scanf("%f",&n3);
	printf("Informe a nota 4: ");
	scanf("%f",&n4);
	
	// calculo da media
	media=(1*n1 + 2*n2 + 3*n3 + 4*n4)/(1+2+3+4);
	
	// imprime resultado
	if (media < 7) {
		printf("Reprovado.");
	} else {
		printf("Aprovado.");
	}
	
	// imprime valor da media
	printf("\nMedia: %2.f",media);
	
	
	return 0;
}
