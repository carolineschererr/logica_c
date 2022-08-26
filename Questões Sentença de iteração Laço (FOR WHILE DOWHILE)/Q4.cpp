#include <iostream>

/* Autora: Caroline Scherer
	Função: imprime números múltiplos de 3 entre 1-20 de forma decrescente */

int main(int argc, char** argv) {
	int i;
	
	i=20;
	
	do {
		if (i%3==0) {
			printf("%d\n",i);
	}
		i--;
	} while (i >= 1); // condição de parada
	return 0;
}
