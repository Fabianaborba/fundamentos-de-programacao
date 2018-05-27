#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define CELSIUS_FAHRENHEIT 1
#define FAHRENHEIT_CELSIUS 2
#define CELSIUS_KELVIN     3
#define KELVIN_CELSIUS     4

int main() {
	float temperaturaOriginal   = 0,
	      temperaturaConvertida = 0;
	int menu = 0;

	menu = CELSIUS_FAHRENHEIT;
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

	if(menu == CELSIUS_FAHRENHEIT){
		temperaturaConvertida = (temperaturaOriginal * 1.8) + 32;
		printf("\t\t\t1. A temperatura de Celsius para Fahrenheit é: %f\n", temperaturaConvertida);
	}
	if(menu == FAHRENHEIT_CELSIUS){
		temperaturaConvertida = (temperaturaOriginal - 32) / 1.8;
		printf("\t\t\t1. A temperatura de Fahrenheit para Celsius é: %f\n", temperaturaConvertida);
	}
	if(menu == CELSIUS_KELVIN){
		temperaturaConvertida = (temperaturaOriginal  + 273);
		printf("\t\t\t1. A temperatura de Celsius para Kelvin é: %f\n", temperaturaConvertida);
	}
	if(menu == KELVIN_CELSIUS){
		temperaturaConvertida = (temperaturaOriginal  - 273);
		printf("\t\t\t1. A temperatura de Kelvin para Celsius é: %f\n", temperaturaConvertida);
	}

  printf("\n\n");
  system("pause");
  return 0;
}
