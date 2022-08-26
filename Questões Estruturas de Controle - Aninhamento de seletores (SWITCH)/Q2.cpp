#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* Autora: Caroline Scherer
	Função: recebe dois operandos. Faz operação e imprime resultado de acordo com código de operação de tabela */

int main(int argc, char** argv) {
	// declaração de variáveis
	int codigo, n1, n2, operacao;
	
	// entrada de operandos
	printf("Informe um numero inteiro: ");
	scanf("%d",&n1);
	printf("\nInforme outro numero inteiro: ");
	scanf("%d",&n2);
	printf("\nSelecione o código da operação: \n");
	printf("\n1 - Adição\n");
	printf("\n2 - Subtração\n");
	printf("\n3 - Divisão\n");
	printf("\n4 - Multiplicação\n");
	scanf("%d",&codigo);
	
	switch (codigo){
		case 1:
			operacao=n1+n2;
			printf("\nA soma dos operandos é %d",operacao);
		break;
		
		case 2:
			operacao=n1-n2;
			printf("\nA subtração dos operandos é %d",operacao);
			break;
			
		case 3:
			operacao=n1/n2;
			printf("\nA divisão dos operandos é %d",operacao);
			break;
			
		case 4:
			operacao=n1*n2;
			printf("\nA multiplicação dos operandos é %d",operacao);
			break;
			
	}
	
	return 0;
}
