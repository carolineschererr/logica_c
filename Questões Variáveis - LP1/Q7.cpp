#include <iostream>

/* Autora: Caroline Scherer
	Função: calcula o valor gasto pelo cliente, o quadrado do valor gasto e imprime o prêmio (valor²) */

int main(int argc, char** argv) {
	// declaração de variáveis
	int quantidade;
	float preco, t_gasto, quadrado;
	
	// input de valores
	printf("Informe a quantidade de produto: \n");
	scanf("%d",&quantidade);
	printf("Informe o preco unitario: \n");
	scanf("%f",&preco);
	
	// calcula o total gasto
	t_gasto=(quantidade*preco);
	
	// calcula o quadrado
	quadrado=(t_gasto*t_gasto);
	
	//imprime o total gasto
	printf("O total gasto foi: %.2f",t_gasto);
	
	//imprime o premio
	printf("\nValor do premio: %.2f",quadrado);	
	
	
	return 0;
}
