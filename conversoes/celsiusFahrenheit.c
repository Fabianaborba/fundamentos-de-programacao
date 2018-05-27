#include<stdio.h>
#include<stdlib.h>

int main(){
	float temperaturaCelsius    = 0,
		    temperaturaFahrenheit = 0;

	printf("********************************\n");
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &temperaturaCelsius);
	printf("********************************\n");

	temperaturaFahrenheit = (temperaturaCelsius * 1.8) + 32;

	printf("Temperatura em Celsius = %.2f\n", temperaturaCelsius);
	printf("Temperatura em Fahrenheit = %.2f\n", temperaturaFahrenheit);
	printf("********************************\n");

	printf("\n\n");
	system("pause");
	return 0;
}
