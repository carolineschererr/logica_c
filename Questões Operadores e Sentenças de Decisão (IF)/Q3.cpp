#include <iostream>

/* Autora: Caroline Scherer
	Fun��o: programa l� m�dia, n�mero de faltas e informa se aluno foi aprovado/reprovado por m�dia ou por faltas */

int main(int argc, char** argv) {
	// declara��o de vari�veis
	int faltas;
	float media;
	
	// input de faltas e media
	printf("Informe o numero de faltas: ");
	scanf("%d",&faltas);
	printf("Informe o valor da media: ");
	scanf("%f",&media);
	
	// operador de decis�o
	if (faltas >= 5) {
		printf("Reprovado por faltas."); // imprime resultado
	} else if (media < 7) {
		printf("Reprovado por media."); // imprime resultado
	} else {
		printf("Parabens! Voce foi aprovado."); // imprime resultado
	}
	
	return 0;
}
