#include <iostream>

/* Autora: Caroline Scherer
	Função: imprime números múltiplos de 3 entre 1-20 em ordem decrescente */

int main(int argc, char** argv) {
	// declaração de variáveis
	int i;
	
	i=20; //inicia contador
	// estrutura while
	while (i >= 1) {
		if (i%3==0){ // identifica se é múltiplo de 3
			printf("%d\n",i);
		}
		i--;
	}
	
	return 0;
}
