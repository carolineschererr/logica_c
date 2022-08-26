#include <iostream>

/* Autora: Caroline Scherer
	Função: imprime números ímpares de 1-20 de forma decrescente */

int main(int argc, char** argv) {
	// declaração de variáveis
	int i;
	
	for (i=20; i>0; i--) { //laço decrescente. OBS: primeiro maior número, depois limite inferior.
		if (i%2!=0) { // identifica números ímpares
			printf("%d\n",i);
		}
	}
	return 0;
}
