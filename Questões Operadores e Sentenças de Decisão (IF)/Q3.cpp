#include <iostream>

/* Autora: Caroline Scherer
	Função: programa lê média, número de faltas e informa se aluno foi aprovado/reprovado por média ou por faltas */

int main(int argc, char** argv) {
	// declaração de variáveis
	int faltas;
	float media;
	
	// input de faltas e media
	printf("Informe o numero de faltas: ");
	scanf("%d",&faltas);
	printf("Informe o valor da media: ");
	scanf("%f",&media);
	
	// operador de decisão
	if (faltas >= 5) {
		printf("Reprovado por faltas."); // imprime resultado
	} else if (media < 7) {
		printf("Reprovado por media."); // imprime resultado
	} else {
		printf("Parabens! Voce foi aprovado."); // imprime resultado
	}
	
	return 0;
}
