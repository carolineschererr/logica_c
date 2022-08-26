#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char funcionario[30];
	int codigo;
	float salario, novo_salario;
	
	printf("Informe o nome do funcionario: ");
	gets(funcionario);
	printf("\nInforme o salario atual: ");
	scanf("%f",&salario);
	printf("\nInforme o codigo da funcao: ");
	scanf("%d",&codigo);
	
	if (codigo >=1 && codigo < 6) {
	
	switch (codigo){
		case 1:
			printf("\n1 - Escriturario.");
			novo_salario=salario+(salario*0.3);
			printf("\nNovo salario: %.2f",novo_salario);
			novo_salario=0;
		break;
		
		case 2:
			printf("\n2 - Secretario.");
			novo_salario=salario+(salario*0.25);
			printf("\nNovo salario: %.2f",novo_salario);
			novo_salario=0;
		break;
		
		case 3:
			printf("\n3 - Caixa.");
			novo_salario=salario+(salario*0.2);
			printf("\nNovo salario: %.2f",novo_salario);
			novo_salario=0;
		break;
		
		case 4:
			printf("\n4 - Gerente.");
			novo_salario=salario+(salario*0.1);
			printf("\nNovo salario: %.2f",novo_salario);
			novo_salario=0;
		break;
		
		case 5:
			printf("\n5 - Diretor.");
			novo_salario=salario+(salario*0.01);
			printf("\nNovo salario: %.2f",novo_salario);
			novo_salario=0;
		break;
	
	}
	
} else {
	printf("\nCodigo invalido.");
}
	
	return 0;
}

/*
4 - Leia o Nome do Funcionário, salário atual e código da função. De acordo com a tabela abaixo, indique o novo salário.
Código | Cargo        | Aumento
1      | Escriturário | 30%
2      | Secretário   | 25%
3      | Caixa        | 20%
4      | Gerente      | 10%
5      | Diretor      | 1%
Indique uma mensagem de erro se o código não existir.
*/
