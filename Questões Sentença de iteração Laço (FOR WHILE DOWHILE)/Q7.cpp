#include <iostream>

/* Autora: Caroline Scherer
	Função: informa o montante mês a mês de investimento em poupança durante 2 anos, com rendimento de 0,5% a.m. e aporte mensal de R$ 100 */

int main(int argc, char** argv) {
	// declaração de variáveis
	int i;
	float aporte, montante, rendimento;
	
	//atribuição de valores iniciais
	aporte=100;
	rendimento=0.005;
	montante=0;
	i=1;
	
	for (i=1; i < 25; i++) {
		montante=montante+(aporte*rendimento)+aporte;
		printf("\nMES %d: R$ %.2f",i,montante);
	}
	return 0;
}

