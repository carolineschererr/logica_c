#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* Autora: Caroline Scherer
	Função: programa lê código do funcionário e salário, identifica função, calcula aumento e informa novo salário c/ aumento */

int main(int argc, char** argv) {
	// declaração de variáveis
	int codigo;
	float salario, novo_salario, aumento;
	
	// impressao da tabela
	printf("Bem vindo! Quadro de funcoes da empresa: ");
	printf("\nCódigo - Cargo - Aumento");
	printf("\n1 - Escriturário - 30%");
	printf("\n2 - Secretário - 25%");
	printf("\n3 - Caixa - 20%");
	printf("\n4 - Gerente - 10%");
	printf("\n5 - Diretor - Sem aumento");
	printf("\nInforme o codigo do seu cargo: ");
	scanf("%d",&codigo);
	printf("\nInforme seu salario: ");
	scanf("%f",&salario);
	
	switch (codigo){
		case 1:
		aumento=0.3;
		novo_salario=salario+salario*aumento;
		printf("\nEscriturario. Seu salario com aumento: R$ %2.f",novo_salario);
		break;
		
		case 2:
		aumento=0.25;
		novo_salario=salario+salario*aumento;
		printf("\nSecretario. Seu salario com aumento: R$ %2.f",novo_salario);
		break;
		
		case 3:
		aumento=0.2;
		novo_salario=salario+salario*aumento;
		printf("\nCaixa. Seu salario com aumento: R$ %2.f",novo_salario);
		break;
		
		case 4:
		aumento=0.1;
		novo_salario=salario+salario*aumento;
		printf("\nGerente. Seu salario com aumento: R$ %2.f",novo_salario);
		break;
		
		case 5:
		aumento=0;
		novo_salario=salario+salario*aumento;
		printf("\nDiretor. Sem aumento. :( Seu salario: R$ %2.f",novo_salario);
		break;
		
		default:
			printf("\nCodigo invalido.");
			
	}
	
	return 0;
}
