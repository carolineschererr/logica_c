#include <iostream>

/* Autora: Caroline Scherer
	Função: lê peso em kg, altura em metros, calcula o IMC e informa faixa de peso */

int main(int argc, char** argv) {
	// declaração de variaveis
	float peso, altura, imc;
	
	// entrada de dados
	printf("Informe o peso em kg: ");
	scanf("%f",&peso);
	printf("Informe a altura em metros: ");
	scanf("%f",&altura);
	
	// calculo IMC
	imc=peso/(altura*altura);
	
	// imprime valor do imc
	printf("Seu IMC: %.2f \n",imc);
	
	// classifica faixa do imc
	if (imc < 18.5) {
		printf("Abaixo do peso."); // imprime resultado
	} else if (imc >= 18.5 && imc < 25) {
		printf("Parabens! Voce esta no peso ideal.");
	} else if (imc >= 25 && imc < 30) {
		printf("Voce esta acima do peso (sobrepeso).");
	} else if (imc >= 30 && imc < 35) {
		printf("Acima do peso - Obesidade I.");
	} else if (imc >= 35 && imc < 40){
		printf("Acima do peso - Obesidade II.");
	} else if (imc >= 40) {
		printf("Acima do peso - Obesidade III.");
	}
	
	
	return 0;
}
