#include<stdio.h>

int main(){

	double number, sum = 0;

	do {
		printf("Entre um número: ");
		scanf("%lf", &number);
		sum += number;
	} while(number != 0.0);

	printf("Soma = %.2lf", sum);

	return 0;
}
