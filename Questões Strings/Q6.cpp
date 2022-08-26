#include <iostream>
#include <string.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int codigo, quantidade;
	float valor, total=0;
	
	
	do {
	printf("\nInforme o codigo do item: ");
	scanf("%d",&codigo);
	printf("\nInforme a quantidade: ");
	scanf("%d",&quantidade);
		switch(codigo){
			case 100:
			valor=5*quantidade;
			printf("\n1 - Cachorro-quente");
			printf("\nValor do lanche: %.2f",valor);
			total=total+valor;
			valor=0;
		break;
		
		case 101:
			valor=6*quantidade;
			printf("\n2 - Bauru simples");
			printf("\nValor do lanche: %.2f",valor);
			total=total+valor;
			valor=0;
		break;
		
		case 102:
			valor=8*quantidade;
			printf("\n3 - Bauru com ovo");
			printf("\nValor do lanche: %.2f",valor);
			total=total+valor;
			valor=0;
		break;
		
		case 103:
			valor=5*quantidade;
			printf("\n3 - Hamburguer");
			printf("\nValor do lanche: %.2f",valor);
			total=total+valor;
			valor=0;
		break;
		
		case 104:
			valor=7.5*quantidade;
			printf("\n4 - Cheeseburguer");
			printf("\nValor do lanche: %.2f",valor);
			total=total+valor;
			valor=0;
		break;
		
		case 105:
			valor=2*quantidade;
			printf("\n5 - Refrigerante");
			printf("\nValor do lanche: %.2f",valor);
			total=total+valor;
			valor=0;
		break;
		
		default:
			printf("\nValor total da operacao: %.f",total);
				
		}
		
	} while (codigo > 99 && codigo < 106);
	
	
	return 0;
}

/*
5 - O cardápio de uma lancheria é o seguinte:
Código do lanche | Especificação   | Preço unitário
100              | Cachorro quente | 5.00
101              | Bauru simples   | 6.00
102              | Bauru c/ovo     | 8.00
103              | Hamburger       | 5.00
104              | Cheeseburger    | 7.50
105              | Refrigerante    | 2.00
Escrever um programa que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche.

Considere que a cada execução somente será calculado um item.

Ao final escreva um resumo do pedido:
Ex
" Pedido: 5 unidade(s) de Cachorro Quente"
"Total R$25,00"
*/
