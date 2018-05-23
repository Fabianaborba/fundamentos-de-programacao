#include<stdlib.h>
#include<stdio.h>

int main(){
	int produto = 0;
	float valor = 0;

	printf("Lojas Quase Dois     - Tabela de Precos\n");
	for(produto = 1; produto <= 50; produto++){
		valor += 1.99;
		printf("%d                   - R$%.2f\n", produto, valor);
	}
}
