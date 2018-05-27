#include<stdio.h>

int resSoma(int num1, int num2){
	int soma = num1 + num2;

	printf("Soma: %d", soma);
}

int main(){
  int num1 = 0,
      num2 = 0;

	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);

	resSoma(num1, num2);

	return 0;
}
