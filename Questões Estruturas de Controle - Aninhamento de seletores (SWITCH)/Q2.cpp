#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* Autora: Caroline Scherer
	Fun��o: recebe dois operandos. Faz opera��o e imprime resultado de acordo com c�digo de opera��o de tabela */

int main(int argc, char** argv) {
	// declara��o de vari�veis
	int codigo, n1, n2, operacao;
	
	// entrada de operandos
	printf("Informe um numero inteiro: ");
	scanf("%d",&n1);
	printf("\nInforme outro numero inteiro: ");
	scanf("%d",&n2);
	printf("\nSelecione o c�digo da opera��o: \n");
	printf("\n1 - Adi��o\n");
	printf("\n2 - Subtra��o\n");
	printf("\n3 - Divis�o\n");
	printf("\n4 - Multiplica��o\n");
	scanf("%d",&codigo);
	
	switch (codigo){
		case 1:
			operacao=n1+n2;
			printf("\nA soma dos operandos � %d",operacao);
		break;
		
		case 2:
			operacao=n1-n2;
			printf("\nA subtra��o dos operandos � %d",operacao);
			break;
			
		case 3:
			operacao=n1/n2;
			printf("\nA divis�o dos operandos � %d",operacao);
			break;
			
		case 4:
			operacao=n1*n2;
			printf("\nA multiplica��o dos operandos � %d",operacao);
			break;
			
	}
	
	return 0;
}
