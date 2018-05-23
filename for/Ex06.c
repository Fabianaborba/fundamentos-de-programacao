/* O PROGRAMA RECEBERÁ UMA FRASE E EM SEGUIDA
IMPRIMIRÁ ELA INTEIRAMENTE EM MAIÚSCULO E EM MINÚSCULO */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	char frase[256];

	printf("Escreva uma frase: ");
	gets(frase);

	printf("\nFrase em maiúsculo: %s", strupr(frase));
	printf("\nFrase em minúsculo: %s\n", strlwr(frase));
	
	system("pause");
	system("cls");
	return 0;
}
