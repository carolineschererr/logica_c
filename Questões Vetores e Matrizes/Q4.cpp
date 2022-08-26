#include <iostream>
#include <stdio.h>
#include <string.h>

/* Autora: Caroline Scherer
	Função: carrega 2 vetores, 1 de caractere e outro numérico. Imprime conteúdo intercalado */

int main(int argc, char** argv) {
	//variaveis
	int numero[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	char letra[10] = {'a','b','c','d','e','f','g','h','i','j'};
	int i;
	
	// impressao dos vetores
	for (i=0; i<10; i++){
		printf("\n%d\n %c",numero[i],letra[i]);
	}
	
	
	
	return 0;
}

/*
4 - Faça um programa que carregue automaticamente 2 vetores. 
O primeiro com 10 elementos numéricos e o segundo com 10 caracteres. 
Imprima o conteúdo destes vetores intercalados. 

Ex:
1a2b3c4d5e...
Dica: char c[10]; for(i=0;i<10<i++) c[i]=65+i;
*/
