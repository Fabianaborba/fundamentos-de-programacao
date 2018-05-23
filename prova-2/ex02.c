#include<stdlib.h>
#include<stdio.h>

int soma(num1, num2);

int main(){
	int num1 = 1,
		  num2 = 0;

	while(num1 >= num2){
		system("cls");
		printf("Informe o primeiro valor: ");
		scanf("%d", &num1);
		printf("Informe o segundo valor (deve ser maior que o primeiro): ");
		scanf("%d", &num2);
	}

	printf("\nA soma de todos os valores impares entre %d e %d sera de: %d", num1, num2, soma(num1, num2));
}

int soma(num1, num2){
	int soma = 0;

	for(num1; num1 <= num2; num1++){
		if ((num1 % 2) != 0){
			soma += num1;
		}
	}

	return soma;
}
