#include<stdlib.h>
#include<stdio.h>

int multiploCinco(int valor);
int popFinal(int qtdAnos);

int main(){
	int habitantes = 0,
		  qtdAnos    = 0;
	float resto    = 1;

	while(resto != 0){
		system("cls");
		printf("Informe a quantidade de anos (deve ser multiplo de cinco): ");
		scanf("%d", &qtdAnos);

		resto = multiploCinco(qtdAnos);
	}

	printf("\nEm %d anos a cidade tera %d habitantes.", qtdAnos, popFinal(qtdAnos));
}

int multiploCinco(int valor){
	float resto = 0;

	resto = valor % 5;

	return resto;
}

int popFinal(int qtdAnos){
	int popFinal  = 0,
		aumento   = 0,
		anosTotal = 0;

		aumento = (1800 * 3) / 100;
		anosTotal = qtdAnos / 5;
		popFinal = 1800 + (aumento * anosTotal);

		return popFinal;
}
