/* O PROGRAMA RECEBERÁ UMA FRASE E CONTARÁ O NÚMERO DE PALAVRAS PRESENTES NELA */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	char frase[200];
	int i          = 0,
	    fim        = 0,
	    caracteres = 0,
	    quantidade = 1;
	
	printf("Digite uma frase ou palavra: ");
	gets(frase);

	caracteres = strlen(frase);
	fim = caracteres - 1;
	
	for(i = 0; i <= fim; i++) {
		if(frase[i] == ' ') {
			quantidade++;
		}
	}
	
	printf("\nSua frase possui %d palavra(s)\n", quantidade);
	
	system("pause");
	system("cls");
	return 0;
}
