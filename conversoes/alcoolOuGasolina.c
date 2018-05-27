#include<stdio.h>
#include<stdlib.h>

int main(){
	float precoGasolina,
		    precoAlcool,
		    diferenca,
		    rendimento;

	rendimento = 0.7;

	printf("Preco da gasolina: ");
	scanf("%f", &precoGasolina);

	printf("Preco do Alcool: ");
	scanf("%f", &precoAlcool);

	diferenca = precoAlcool / precoGasolina;

	printf("\n\n");

	if(diferenca >= rendimento){
		printf("Gasolina.");
	}else{
		printf("Alcool.");
	}

	printf("\n\n");
	system("pause");
	return 0;
}
