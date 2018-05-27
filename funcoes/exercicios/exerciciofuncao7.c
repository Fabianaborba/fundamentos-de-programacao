#include <stdio.h>
#include <stdlib.h>

int glauco(int soma){
	printf("\n %d", soma);
	printf("\n");
}
int main(void) {
    int numero, soma = 0;
    int num1, num2;
    
    printf("Informe um numero: ");
    scanf("%d",&num1);
    printf("Informe outro numero: ");
    scanf("%d",&num2);
    
    for (numero = num1; numero <= num2; numero ++) {
        soma = numero + soma;
    }
    
	glauco(soma);
	return(0);
}
