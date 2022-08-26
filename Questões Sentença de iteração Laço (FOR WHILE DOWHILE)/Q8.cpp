#include <iostream>

/* Autora: Caroline Scherer
	Função: lê código, quantidade e informa total do pedido enquanto o código informado estiver entre 100-105 */

int main(int argc, char** argv) {
	// variáveis
	int codigo, quantidade, quantidade1, quantidade2, quantidade3, quantidade4, quantidade5, quantidade6;
	float total, lanche1, lanche2, lanche3, lanche4, lanche5, lanche6;
	
	// laço do-while
	
	do {
		printf("\nInforme o codigo do pedido: ");
		scanf("%d",&codigo);
		printf("\nInforme a quantidade: ");
		scanf("%d",&quantidade);
	
		switch(codigo) {
			case 100:
				quantidade1=quantidade;
				lanche1=quantidade1*11;
				printf("\n100 - Cachorro quente - 11,00. Quantidade: %d. Valor: %.2f",quantidade1,lanche1);	
				total=total+lanche1;
				quantidade=0;
				break;
			case 101:
				quantidade2=quantidade;
				lanche2=quantidade2*13;
				printf("\n101 - Bauru simples - 13,00. Quantidade: %d. Valor: %.2f",quantidade2,lanche2);	
				total=total+lanche2;
				quantidade=0;
				break;
			case 102:
				quantidade3=quantidade;
				lanche3=quantidade3*15;	
				printf("\n102 - Bauru c/ovo - 15,00. Quantidade: %d. Valor: %.2f",quantidade3,lanche3);
				total=total+lanche3;
				quantidade=0;
				break;
			case 103:
				quantidade4=quantidade;
				lanche4=quantidade4*11;
				printf("\n103 - Hamburguer - 11,00. Quantidade: %d. Valor: %.2f",quantidade4,lanche4);
				total=total+lanche4;
				quantidade=0;
				break;
			case 104:
				quantidade5=quantidade;
				lanche5=quantidade5*13;	
				printf("\n104 - Cheeseburguer - 13,00. Quantidade: %d. Valor: %.2f",quantidade5,lanche5);
				total=total+lanche5;
				quantidade=0;
				break;
			case 105:
				quantidade6=quantidade;
				lanche6=quantidade6*3;
				printf("\n105 - Refrigerante - 3,00. Quantidade: %d. Valor: %.2f",quantidade6,lanche6);	
				total=total+lanche6;
				quantidade=0;
				break;
			default:
				printf("\nFIM. VALOR TOTAL: R$ %.2f",total);
		}
		
	} while (codigo > 99 && codigo < 106);
	
	return 0;
}

/* 100 - Cachorro quente - 11,00
101 - Bauru simples - 13,00 
102 - Bauru c/ovo - 15,00
103 - Hamburger - 11,00
104 - Cheeseburger - 13,00
105 - Refrigerante - 3,00 */
