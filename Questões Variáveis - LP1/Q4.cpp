#include <iostream>

/* Autora: Caroline Scherer
	Função: programa lê nº do funcionário, salário atual, calcula e informa aumento e novo salário baseado em produtividade e INPC */

int main(int argc, char** argv) {
	//declaração de variáveis
	int n_func;
	float salario_atual, salario_novo, i_prod, aumento, inpc;
	
	// input dos valores
	printf("Informe o numero do funcionario: ");
	scanf("%d",&n_func);
	printf("Informe o salario atual: ");
	scanf("%f",&salario_atual);
	printf("Informe o indice de produtividade em inteiros: ");
	scanf("%f",&i_prod);
	printf("Informe o INPC 2020: ");
	scanf("%f",&inpc);
	
	//calcula o aumento
	aumento = (salario_atual*0.75*inpc/100) + (salario_atual*i_prod/100);
	
	//calcula novo salario
	salario_novo = salario_atual + aumento;
	
	// imprime aumento
	printf("Valor do aumento: %f \n", aumento);
	
	// imprime o novo salario
	printf("Valor do salario atualizado: %f",salario_novo);
		
	return 0;
}
