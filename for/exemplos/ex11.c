#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	char palavra[200];
	int i, tamanho;
	
	printf("\nDigite uma palavra: \n");
	fgets(palavra,sizeof(palavra),stdin);
	tamanho = strlen(palavra);
	for(i = tamanho; i >= 0; i--)
	{
		printf("%c",palavra[i]);
	}
	exit(0);
}
