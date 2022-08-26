#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* Autora: Caroline Scherer
	Função: imprime números pares entre 1-20 em ordem crescente */

int main(int argc, char** argv) {
	// declaração de variáveis
	int i;
	
	// laço percorre 1-21
	for (i=1; i <21; i++){
		if (i%2==0) { //condição p/ impressão
			printf("%d\n",i);
		}
	}
	return 0;
}
