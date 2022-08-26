#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* Autora: Caroline Scherer
	Função: lê código de origem de produto e imprime a procedência  */

int main(int argc, char** argv) {
	// declaração de variáveis
	int codigo;
	
	// entrada do código do produto
	printf("Informe o codigo do produto: ");
	scanf("%d",&codigo);
	
	// estrutura SWITCH
	
	switch (codigo){
		case 1:				// ATENÇÃO: o numero do codigo fica sem aspas no caso de ser uma integer
			printf("1 - Sul");
			break;
		
		case 2:
			printf("2 - Norte");
			break;
		
		case 3:
			printf("3 - Leste");
			break;
		
		case 4:
			printf("4 - Oeste");
			break;
			
		case 5:
		case 6:
			printf("5 ou 6 - Nordeste");
		break;
		
		case 7:
		case 8:
		case 9:
			printf("7, 8, ou 9 - Sudeste");
		break;
		
		case 10:
		case 11:
		case 12:
			printf("10 a 12 - Centro-oeste");
		break;
		
		case 21:
		case 22:
			printf("21 a 22 - Noroeste");
			break;
			
		default:
			printf("Opcao invalida.");
	}
	
	return 0;
}

