#include <stdio.h>
#include <stdlib.h>

int main() {
  
	int cont, numero; 
	int div = 0;
  
		printf("Digite um número inteiro e positivo: ");
    	scanf("%d", &numero);
  
		for (cont = 1; cont <= numero; cont++) {
    if (numero % cont == 0) { 
     div++;
    }
  }
  
  if (div == 2)
    printf("é primo!\n");
  else
    printf("não é primo!\n");

  return 0;
}
