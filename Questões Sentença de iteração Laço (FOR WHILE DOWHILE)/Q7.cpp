#include <iostream>

/* Autora: Caroline Scherer
	Fun��o: informa o montante m�s a m�s de investimento em poupan�a durante 2 anos, com rendimento de 0,5% a.m. e aporte mensal de R$ 100 */

int main(int argc, char** argv) {
	// declara��o de vari�veis
	int i;
	float aporte, montante, rendimento;
	
	//atribui��o de valores iniciais
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

