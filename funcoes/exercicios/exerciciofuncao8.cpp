#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int somar(int soma){
	printf("\n Soma: %d\n", soma);
}
int main(){
	  int soma = 0,	num = 0, cont = 0;
			
	for (cont = 1; cont <= 10; cont++) {
		printf("Escreva o %dº: ", cont);
		scanf("%d", &num);
        soma = soma + num;
    }
    somar(soma);
    return(0);
}
