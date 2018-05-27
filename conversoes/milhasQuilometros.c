#include<stdio.h>
#include<stdlib.h>

int main(){
	float milhas,
  		  quilometros,
	  	  conver;
	char marca[256];

	printf("Digite a marca/modelo do carro: ");
	fgets (marca, sizeof(marca), stdin);

	conver = 1.6;

	printf("Distancia em milhas: ");
	scanf("%f", &milhas);

	quilometros = milhas * conver;

	printf("\n\n");
	printf("A distancia convertida e: %f", quilometros);

	printf("\n\n");

	system("pause");
}
