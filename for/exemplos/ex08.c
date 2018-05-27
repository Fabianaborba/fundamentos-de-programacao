#include<stdio.h>
#include<stdlib.h>

#define MAX   11
#define START 0

int main(){
	int contador = 0,
      numero   = 0,
      conta    = 0;

	printf("Número - Tabuada: ");
	scanf("%d", &numero);

	for(contador = START; contador < MAX; contador++){
		conta = contador * numero;

		printf("%d x %d = %d\n", numero, contador, conta);
	}

  return 0;
}
