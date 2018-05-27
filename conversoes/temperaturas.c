#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define celsiusParaFahrenheit 1
#define fahrenheitParaCelsius 2
#define celsiusParaKelvin     3
#define kelvinParaCelsius     4

int main() {
	float temperaturaOriginal;
	float temperaturaConvertida;
	int menu;

	menu = celsiusParaFahrenheit;
	system("cls");
	printf("\t\t\t***************************\n");
	printf("\t\t\t           M E N U         \n");
	printf("\t\t\t***************************\n\n");

	printf("\t\t\t1. Celcius para Fahrenheit\n");
	printf("\t\t\t2. Fahrenheit para Celsius\n");
	printf("\t\t\t3. Celcius para Kelvin\n");
	printf("\t\t\t4. Kelvin para Celsius\n\n");
	printf("\t\t\t***************************\n\n");
	printf("\t\t\tO que você deseja fazer?");
	scanf("%d",&menu);

	system("cls");
	printf("\t\t\t***************************\n");
	printf("\t\t\t     C O N V E R S A O   \n");
	printf("\t\t\t***************************\n\n");
	printf("\t\t    Digite a temperatura a ser convertida:");
	scanf("%f",&temperaturaOriginal);

	if(menu == celsiusParaFahrenheit){
		temperaturaConvertida = (temperaturaOriginal * 1.8) + 32;
		printf("\t\t\t1. A temperatura de Celsius para Fahrenheit é: %f\n", temperaturaConvertida);
	}
	if(menu == fahrenheitParaCelsius){
		temperaturaConvertida = (temperaturaOriginal - 32) / 1.8;
		printf("\t\t\t1. A temperatura de Fahrenheit para Celsius é: %f\n", temperaturaConvertida);
	}
	if(menu == celsiusParaKelvin){
		temperaturaConvertida = (temperaturaOriginal  + 273);
		printf("\t\t\t1. A temperatura de Celsius para Kelvin é: %f\n", temperaturaConvertida);
	}
	if(menu == kelvinParaCelsius){
		temperaturaConvertida = (temperaturaOriginal  - 273);
		printf("\t\t\t1. A temperatura de Kelvin para Celsius é: %f\n", temperaturaConvertida);
	}

  system("pause");
  return 0;
}
