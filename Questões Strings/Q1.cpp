#include <iostream>
#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char string1[100], string2[10];
int tamanho_string1, tamanho_string2;
int tamanho_v1, tamanho_v2;
int comp, soma_tamanho_string;

printf("Informe a string 1: ");
gets(string1);
printf("Informe a string 2: ");
gets(string2);

tamanho_string1 = strlen(string1); //verifica tamanho da string
tamanho_string2 = strlen(string2);
printf("\nTamanho da string 1: %d",tamanho_string1);
printf("\nTamanho da string 2: %d",tamanho_string2);



tamanho_v1 = sizeof(string1); //verifica tamanho da variavel
tamanho_v2 = sizeof(string2);

printf("\nTamanho da variavel 1: %d",tamanho_v1);
printf("\nTamanho da variavel 2: %d",tamanho_v2);

comp = strcmp(string1,string2); //compara strings

if (comp < 0) {
	printf("\nA String1 (%s) fica ANTES da String2 (%s).",string1,string2);
} else if (comp > 0) {
	printf("\nA String1 (%s) fica DEPOIS da String2 (%s).",string1,string2);
} else {
	printf("\nA String1 (%s) e a String2 (%s) são IGUAIS.",string1,string2);
}


strcat(string1, string2); //concatena strings
//verificar se ha espaço p/ concatenar
soma_tamanho_string = tamanho_string1+tamanho_string2;
printf("\nTamanho da Soma das Strings: %d",soma_tamanho_string);

if (tamanho_v1 > soma_tamanho_string) {
	printf("\nHa espaço.");
	printf("\nConcatenacao: %s",string1);
} else {
	printf("\nERRO: nao ha espaco p/ concatenacao.");
}
	
	return 0;
}
