#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	char palavra[200];
	int i   = 0,
      tam = 0;

	printf("Digite uma palavra: ");
	fgets(palavra, sizeof(palavra), stdin);

	tam = strlen(palavra);

	for(i = tam; i >= 0; i--){
		printf("%c",palavra[i]);
	}

	return 0;
}
