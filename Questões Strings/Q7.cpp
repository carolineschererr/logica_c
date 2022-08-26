#include <iostream>
#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char filme1[30];
	char filme2[30];
	char filme3[30];
	float nota1, nota2, nota3, media;
	int maior, menor;
	
	printf("\nInforme o filme 1: ");
	gets(filme1);
	printf("\nInforme a nota 1: ");
	scanf("%f",&nota1);
	printf("\nInforme o filme 2: ");
	gets(filme2);
	printf("\nInforme a nota 2: ");
	scanf("%f",&nota2);
	printf("\nInforme o filme 3: ");
	gets(filme3);
	printf("\nInforme a nota 3: ");
	scanf("%f",&nota3);
	
	media=(nota1+nota2+nota3)/3;
	printf("\nMedia geral: %.2f",media);
	
	maior=nota1;
	
	if (nota2 > maior) {
		maior=nota2;
	} else if (nota3 > maior){
		maior=nota3;
	}
	printf("\nMaior nota: %d",maior);
	
	menor=nota1;
	
	if (nota2 < menor){
		menor=nota2;
	} else if (nota3 < menor){
		menor=nota3;
	}
	printf("\nMenor nota: %d",menor);
	
	return 0;
}

/* 
6 - Escreva um programa que leia, através da digitação de um usuário, o nome de 3 filmes e a nota da crítica, (exemplo na  tabela abaixo).
Após, o programa deve informar a média das notas das críticas, e o nome dos filmes com a maior e a menor nota.

Filme         | Nota da Crítica
Família Adams | 7.9
Robocop       | 9.9
X-Men         | 7.5

*/
