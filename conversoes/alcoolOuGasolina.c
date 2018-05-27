#include<stdio.h>
#include<stdlib.h>

int main(){
  float precoGasolina = 0,
        precoAlcool   = 0,
		    diferenca     = 0,
		    rendimento    = 0;

	rendimento = 0.7;

	printf("Preco da gasolina: ");
	scanf("%f", &precoGasolina);

	printf("Preco do alcool: ");
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
