#include <iostream>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {	
	char nome[30];
	int idade, m_i;

m_i=18;

printf("Informe o nome: ");
gets(nome);
printf("\nInforme a idade: ");
scanf("%d",&idade);

printf("\nO nome informado foi %s e a pessoa tem %d anos. \n",nome,idade); //verificador

//comparacao

if (idade > m_i) {
	printf("\nMaior de idade.");
} else {
	printf("\nMenor de idade.""");
}

	return 0;
}
