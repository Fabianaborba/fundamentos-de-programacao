#include <stdio.h>
#include <stdlib.h>

int main (){
	float temperaturaFahrenheit,
	      temperaturaCelsius;

	temperaturaCelsius = 0;
	temperaturaFahrenheit = 0;

	printf("***********************************\n");
	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f", &temperaturaFahrenheit);
	printf("********************************\n");

	temperaturaCelsius = (temperaturaFahrenheit - 32) / 1.8;

	printf("Temperatura Fahrenheit = %.2f\n", temperaturaFahrenheit);
	printf("Temperatura Celsius = %.2f\n", temperaturaCelsius);
	printf("********************************\n");

	printf("\n\n");
	system("pause");
	return (0);
}
