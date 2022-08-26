#include <iostream>
#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int faltas;
	float n1, n2, t1, media;
	
	printf("Informe a nota 1: ");
	scanf("%f",&n1);
	printf("\nInforme a nota 2: ");
	scanf("%f",&n2);
	printf("\nInforme a nota do trabalho: ");
	scanf("%f",&t1);
	printf("\nInforme o numero de faltas: ");
	scanf("%d",&faltas);
	
	media=(n1+n2+t1)/3;
	
	if (faltas >=5) {
		printf("\nConceito E - Reprovado por faltas.");
	}
	
	else if (media > 8) {
		printf("\nConceito A.");
		printf("\nAprovado.");
	} else if (media >= 7) {
		printf("\nConceito B.");
		printf("\nAprovado.");
	} else if (media >= 6) {
		printf("\nConceito C.");
		printf("\nAprovado.");
	} else if(media < 6){
		printf("\nConceito D.");
		printf("\nReprovado.");
	}
	
	return 0;
}

/*

3 - Faça um programa que leia as notas de 2 provas e um trabalho e o numero de faltas. Calcule a média aritmética. E indique o conceito. 

A para (8.0 a 10),
B para (7.0 a 7.9),
C para (6.0 a 6.9),
D para (0.0 a 5.9)
E para reprovado por faltas. Maior ou igual a 5.
Escreva "Reprovado" ou "Aprovado".

*/
