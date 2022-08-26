#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* programa que calcula a media simples de 3 notas e imprime no final */

int main(int argc, char** argv) {
	
	//declaração de variaveis
	float n1, n2, n3, media;
	
	// input de notas
	printf("Informe a nota 1: \n");
	scanf("%f",&n1);
	printf("Informe a nota 2: \n");
	scanf("%f",&n2);
	printf("Informe a nota 3: \n");
	scanf("%f",&n3);
	
	//calculo da media	
	media = (n1+n2+n3)/3;
	
	//impressao da media
	printf("A média é %f",media);
	
	return 0;
}
