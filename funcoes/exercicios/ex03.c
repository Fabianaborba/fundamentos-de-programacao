#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int soma(int quant){
  int soma = 0,
      num  = 0;

  for(int cont = 1; cont <= quant; cont++){
    printf("Escreva o %dº valor: ", cont);
		scanf("%d", &num);

    soma += num;
  }

	return soma;
}

int main(){
  int quant  = 0,
      result = 0;

  printf("Informe a quantidade de valores a serem somados: ");
  scanf("%d", &quant);

  result = soma(quant);

  printf("Soma dos valores: %d", result);

  return(0);
}
