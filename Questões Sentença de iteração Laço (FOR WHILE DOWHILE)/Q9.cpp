#include <iostream>

/* Autora: Caroline Scherer
	Função: lê votos de 3 candidatos, brancos, nulos e informa resultado */

int main(int argc, char** argv) {
	// declaração de variáveis
	int codigo, total=0, brancos=0, nulos=0, voto1=0, voto2=0, voto3=0, vencedor;
	
	printf("Código - Candidato");
	printf("\n1 - Zezinho");
	printf("\n2 - Huguinho");
	printf("\n3 - Luizinho");
	printf("\n4 - Voto em Branco");
	printf("\n5 - Voto Nulo");
	printf("\n0 - Encerrar e apurar");
	
	do {
		printf("\nInforme o codigo: ");
		scanf("%d",&codigo);
		switch (codigo){
			case 1:
				voto1=voto1+1;
			break;
			case 2:
				voto2=voto2+1;
			break;
			case 3:
				voto3=voto3+1;
			break;
			case 4:
				brancos=brancos+1;
			break;
			case 5:
				nulos=nulos+1;
			break;
		}
		
	} while (codigo > 0);
	
	total=voto1+voto2+voto3+brancos+nulos;
	
	printf("\nTOTAL DE VOTOS: %d",total);
	printf("\nTOTAL 1 - ZEZINHO: %d",voto1);
	printf("\nTOTAL 2 - HUGUINHO: %d",voto2);
	printf("\nTOTAL 3 - LUIZINHO: %d",voto3);
	printf("\nTOTAL 4 - BRANCOS: %d",brancos);
	printf("\nTOTAL 5 - NULOS: %d",nulos);
	
	vencedor=voto1;
	
	if (voto2 > voto1){
		vencedor=voto2;
	}
	if (voto3 > voto2){
		vencedor=voto3;
	}
	
	printf("\nVOTOS DO VENCEDOR: %d",vencedor);
	
	return 0;
}

