#include<stdio.h>
#include<stdlib.h>

#define MAX 11
#define START 0
int main(){
	int contador, numero, conta;
	
	
	printf("Número tabuada: ");
	scanf("%d",&numero);
	
	for(contador = START;contador < MAX;contador = contador ++){
		conta = contador * numero;
		printf("%d x %d = %d\n", numero, contador, conta);
	}
	return 0;	
}
