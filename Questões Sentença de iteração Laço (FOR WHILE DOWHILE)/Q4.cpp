#include <iostream>

/* Autora: Caroline Scherer
	Fun��o: imprime n�meros m�ltiplos de 3 entre 1-20 de forma decrescente */

int main(int argc, char** argv) {
	int i;
	
	i=20;
	
	do {
		if (i%3==0) {
			printf("%d\n",i);
	}
		i--;
	} while (i >= 1); // condi��o de parada
	return 0;
}
