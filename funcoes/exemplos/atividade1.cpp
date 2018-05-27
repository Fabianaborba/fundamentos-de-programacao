#include <stdio.h>

int valor, cont, total;


int glauco(int cont, int valor, int total){
	total = 0;
	for (cont = 1; cont <= valor; cont ++){
		if (valor%cont==0){
  		printf("Divisor %d \n", cont);total++;
  		}
 	}
 	printf("\nTotal de Divisores: %d", total);
}

int main(){
	printf("Número: ");
	scanf("%d", &valor);
	
	glauco(cont, valor, total);
	
	
return 0;
}
