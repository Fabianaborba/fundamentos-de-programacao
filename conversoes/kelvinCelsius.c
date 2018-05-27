#include<stdio.h>
#include<stdlib.h>

int main (){
	float temperaturaCelsius = 0,
		    temperaturaKelvin  = 0;

	printf("***********************************\n");
	printf("Digite a temperatura em Kelvin: ");
	scanf("%f", &temperaturaKelvin);
	printf("********************************\n");

  temperaturaCelsius = (temperaturaKelvin - 273);

  printf("Temperatura em Kelvin = %.2f\n", temperaturaKelvin);
	printf("Temperatura em Celsius = %.2f\n", temperaturaCelsius);
	printf("********************************\n");

  printf("\n\n");
	system("pause");
	return 0;
}
