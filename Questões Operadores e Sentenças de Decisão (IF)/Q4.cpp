#include <iostream>

/* Autora: Caroline Scherer
	Função: programa recebe idade do nadador e classifica-o em uma das 5 categorias de acordo com idade */

int main(int argc, char** argv) {
	// declaração de variáveis
	int idade;
	
	// entrada de idade do nadador
	printf("Informe a idade do nadador: ");
	scanf("%d",&idade);
	
	// estrutura if-else
	
	if (idade >= 18) {
		printf("Categoria adulto."); // imprime categoria
	} else	if (idade >=5 && idade <= 7) {
		printf("\nCategoria infantil A.");
	} else if (idade >= 8 && idade <= 10) {
			printf("\nCategoria infantil B.");
	} else if (idade >= 11 && idade <= 13) {
		printf("\nCategoria juvenil A.");
	} else if (idade >= 14 && idade <=17) {
		printf("\nCategoria juvenil B.");
	}
	
	return 0;
}
