#include<stdio.h>

int divisor(int valor){
  int total = 0;

	for (int cont = 1; cont <= valor; cont ++){
		if (valor%cont==0){
  		printf("Divisor %d \n", cont);
      total++;
    }
 	}

 	printf("\nTotal de Divisores: %d", total);
}

int main(){
  int valor = 0;

	printf("Número: ");
	scanf("%d", &valor);

	divisor(valor);

  return 0;
}
