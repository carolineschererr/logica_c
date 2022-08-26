#include <iostream>
#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char funcionario[30];
	int salario, novo_salario;
	
	printf("Informe o nome do funcionario: ");
	gets(funcionario);
	printf("\nInforme o salario do funcionario: ");
	scanf("%d",&salario);
	
	if (salario < 500) {
		novo_salario=salario+(salario*0.3);
		printf("\nNovo salario: %d",novo_salario);
	} else {
		printf("\nFuncionario %s sem direito a aumento.",funcionario);
	}
	
	return 0;
}
