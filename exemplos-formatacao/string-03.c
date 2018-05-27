#include<string.h>
#include<stdio.h>

int main(){
	char nome[256];

  printf("\t\tDigite o seu nome:");
	fgets(nome, sizeof(nome), stdin);
}
