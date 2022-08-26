#include <iostream>

/* Autora: Caroline Scherer
	Função: lê código do produto, quantidade, calcula e imprime o preço a ser pago */

int main(int argc, char** argv) {
	//declaração de variáveis
	int codigo, quantidade;
	float preco_final;
	
	// impressão menu
	printf("Seja bem vindo ao Lanche Feliz! ");
	printf("\nCódigo do lanche - Especificação - Preço unitário");
	printf("\n100 - Cachorro quente - 5,00");
	printf("\n101 - Bauru simples - 6,00");
	printf("\n102 - Bauru c/ovo - 8,00");
	printf("\n103 - Hamburger - 5,00");
	printf("\n104 - Cheeseburger - 7,50");
	printf("\n105 - Refrigerante - 2,00");
	printf("\nInforme o codigo do lanche de acordo com a tabela: ");
	scanf("%d",&codigo);
	printf("\nInforme a quantidade: ");
	scanf("%d",&quantidade);
	
	// estrutura switch
	switch (codigo) {
		case 100:
			preco_final=5*quantidade; // calculo do preco
			printf("Cachorro quente. TOTAL: R$ %.2f",preco_final); // impressao do preco
			break;
			
		case 101:
			preco_final=6*quantidade;
			printf("Bauru simples. TOTAL: R$ %.2f",preco_final);
			break;
			
		case 102:
			preco_final=8*quantidade;
			printf("Bauru com ovo. TOTAL: R$ %.2f",preco_final);
			break;
		
		case 103:
			preco_final=5*quantidade;
			printf("Hamburguer. TOTAL: R$ %.2f",preco_final);
			break;
		
		case 104:
			preco_final=7.5*quantidade;
			printf("Cheeseburguer. TOTAL: R$ %.2f",preco_final);
			break;
		
		case 105:
			preco_final=2*quantidade;
			printf("Refrigerante. TOTAL: R$ %.2f",preco_final);
			break;
			
		default:
			printf("Codigo inexistente.");
	}
	
	return 0;
}
