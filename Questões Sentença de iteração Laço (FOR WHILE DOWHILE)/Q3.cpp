#include <iostream>

/* Autora: Caroline Scherer
	Fun��o: imprime n�meros m�ltiplos de 3 entre 1-20 em ordem decrescente */

int main(int argc, char** argv) {
	// declara��o de vari�veis
	int i;
	
	i=20; //inicia contador
	// estrutura while
	while (i >= 1) {
		if (i%3==0){ // identifica se � m�ltiplo de 3
			printf("%d\n",i);
		}
		i--;
	}
	
	return 0;
}
