#include <iostream>
#include<stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char usuario[50];
char nomeCompleto[100];
char noticia;
int  idade;
puts("Digite seu Usu�rio: ");
gets(usuario);
puts("Digite seu Nome Completo: ");	
gets(nomeCompleto);
puts("Deseja receber not�cias?? Digite 's' para SIM ou 'n' para N�O: ");
noticia = getchar();
puts("Digite sua Idade: ");	
scanf("%d", &idade);
puts("Seu Usu�rio �: ");
puts(usuario);
puts("Seu Nome Completo �: ");
puts(nomeCompleto);
puts("Sua resposta para not�cias foi: ");
putchar(noticia);
printf("\nSua Idade � :\n %d", idade);

	return 0;
}
