#include <iostream>

/* Autora: Caroline Scherer
	Fun��o: imprime n�meros �mpares de 1-20 de forma decrescente */

int main(int argc, char** argv) {
	// declara��o de vari�veis
	int i;
	
	for (i=20; i>0; i--) { //la�o decrescente. OBS: primeiro maior n�mero, depois limite inferior.
		if (i%2!=0) { // identifica n�meros �mpares
			printf("%d\n",i);
		}
	}
	return 0;
}
