/* O PROGRAMA SOLICITATÁ UMA FRASE E UMA PALAVRA AO 
USUÁRIO E VERIFICARÁ SE A PALAVRA EXISTE NA FRASE */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
#include<string.h>

int main (){
	setlocale(LC_ALL, "Portuguese");

	int  tamPalavra = 0,
		 resultado  = 0,
		 tamTexto   = 0,
	     palavras   = 0,
		 iguais     = 0,
		 i          = 0, 
		 j          = 0;
	char texto[255],
		 palavra[200];
		
	printf("Digite uma frase: ");
	gets(texto);
		
	tamTexto = strlen(texto);
				
	printf("Digite uma palavra: ");
	gets(palavra);
	
	tamPalavra = strlen(palavra);			
	resultado  = 0;
	iguais     = 0;

	for (i = 0; i < tamTexto; i++) {
		if (texto[i] == palavra[0]) {
			iguais = 1;
			for (j = 0; j < tamPalavra; j++) {
				if (texto[i + j] != palavra [j]) {
					iguais = 0;
				}
			}	
		}
		if (iguais == 1) {
			i = tamTexto;
			resultado = 1;
		}
	}

	if (resultado == 1) {
		printf("\nA palavra \"%s\" foi encontrada na frase.\n\n", palavra);
	} else {
		printf("\nA palavra \"%s\" não foi encontrada na frase.\n\n", palavra);
	}
		
	system("pause");
	system("cls");
	return 0;
}
