#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* Autora: Caroline Scherer
	Fun��o: imprime n�meros pares entre 1-20 em ordem crescente */

int main(int argc, char** argv) {
	// declara��o de vari�veis
	int i;
	
	// la�o percorre 1-21
	for (i=1; i <21; i++){
		if (i%2==0) { //condi��o p/ impress�o
			printf("%d\n",i);
		}
	}
	return 0;
}
