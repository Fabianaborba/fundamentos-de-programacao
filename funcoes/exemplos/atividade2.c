#include <stdio.h>

int num1, num2, soma;

int glauco(int num1, int num2, int soma){
	soma = num1 + num2;
	
	printf("Soma: %d", soma);
}

int main(){
	printf("Digite dois numeros separados: ");
	scanf("%d",&num1);
	scanf("%d",&num2);
	
	glauco(num1, num2, soma);
	
	return 0;
}
