/* O PROGRAMA SOLICITARÁ AO USUÁRIO E INTERCALARÁ 
OS CARACTERES EM MAIÚSCULOS E MINÚSCULOS */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<ctype.h>

int main(){
	int  i        = 0,
		tamanho   = 0,
		caixaAlta = 1;
	char palavra[64],
		 caracter,
		 maiuscula,
		 minuscula;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite uma palavra: ");
	scanf("%s", &palavra);
	
	tamanho = strlen(palavra);
	
	printf("\n");
	
	for(i=0; i <= tamanho; i++){
		caracter = palavra[i];
		maiuscula = toupper(caracter);
		minuscula = tolower(caracter);
		if(caixaAlta == 1) {
			caixaAlta = 0; 
			printf("%c",maiuscula);
		} else {
			caixaAlta = 1;
			printf("%c",minuscula);
		}
	}
	printf("\n");
	
	system("pause");
	system("cls");
	return 0;
}