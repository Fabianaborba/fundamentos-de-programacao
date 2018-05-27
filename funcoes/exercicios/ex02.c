#include <stdio.h>
#include <stdlib.h>

int soma(int num1, int num2){
  int soma = 0;

	for(int cont = num1; cont <= num2; cont++){
    soma += cont;
  }

  return soma;
}

int main(void) {
  int num1 = 0,
      num2 = 0;

  printf("Informe o primeiro valor: ");
  scanf("%d", &num1);
  printf("Informe o segundo valor: ");
  scanf("%d", &num2);

  printf("Soma: %d", soma(num1, num2));

	return 0;
}
