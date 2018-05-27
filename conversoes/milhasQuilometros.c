#include<stdio.h>
#include<stdlib.h>

int main(){
	float milhas      = 0,
  		  quilometros = 0,
	  	  conversao      = 0;
	char marca[256];

  conversao = 1.6;

	printf("Digite a marca/modelo do carro: ");
	fgets (marca, sizeof(marca), stdin);

	printf("Distancia em milhas: ");
	scanf("%f", &milhas);

	quilometros = milhas * conversao;

	printf("\n\n");
	printf("A distancia convertida e: %f", quilometros);

	printf("\n\n");
	system("pause");
  return 0;
}
