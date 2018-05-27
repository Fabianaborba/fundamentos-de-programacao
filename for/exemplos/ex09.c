#include<stdio.h>
#include<stdlib.h>

#define A_MAIUSCULA 'A'
#define Z_MAIUSCULA 'Z'

int main(){
	char maiuscula;
	
	for(maiuscula = A_MAIUSCULA; maiuscula <= Z_MAIUSCULA; maiuscula++){
		printf("%c \n", maiuscula);
	}
	return 0;
}
