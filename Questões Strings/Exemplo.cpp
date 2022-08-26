#include <iostream>
#include<stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char usuario[50];
char nomeCompleto[100];
char noticia;
int  idade;
puts("Digite seu Usuário: ");
gets(usuario);
puts("Digite seu Nome Completo: ");	
gets(nomeCompleto);
puts("Deseja receber notícias?? Digite 's' para SIM ou 'n' para NÃO: ");
noticia = getchar();
puts("Digite sua Idade: ");	
scanf("%d", &idade);
puts("Seu Usuário é: ");
puts(usuario);
puts("Seu Nome Completo é: ");
puts(nomeCompleto);
puts("Sua resposta para notícias foi: ");
putchar(noticia);
printf("\nSua Idade é :\n %d", idade);

	return 0;
}
