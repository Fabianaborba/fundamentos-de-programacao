/* O PROGRAMA SOLICITARÁ UMA FRASE E ENTRE CADA
CARACTERE SERÁ INSERIDO UM ESPAÇO */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<conio.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char frase[200];
	int  i        = 0,
		 tamFrase = 0;
	
	printf("Digite uma frase ou palavra: ");
	gets(frase);
	
	tamFrase = strlen(frase);

	for(i = 0; i <= tamFrase; i++){
		printf("%c ", frase[i]);
	}
	printf("\n");

	system("pause");
	system("cls");
	return 0;
}
