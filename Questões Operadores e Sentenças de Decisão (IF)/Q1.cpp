#include <iostream>

/* Autora: Caroline Scherer
	Função: lê 3 notas, calcula a media e exibe a mensagem aprovado/reprovado */

int main(int argc, char** argv) {
	// declaração de variáveis
	float n1, n2, n3, media;
	
	// input valores
	printf("Informe a nota 1: ");
	scanf("%f",&n1);
	printf("Informe a nota 2: ");
	scanf("%f",&n2);
	printf("Informe a nota 3: ");
	scanf("%f",&n3);
	
	// calcula a media
	media=(n1+n2+n3)/3;
	
	// sentença de decisao
	if (media < 7) {
		printf("Reprovado."); // imprime resultado
	} else {
		printf("Aprovado."); // imprime resultado
	}
	
	// imprime valor da media
	printf("\nMedia: %.2f",media);
	
	return 0;
}
