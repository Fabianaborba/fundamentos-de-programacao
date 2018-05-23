#include <stdio.h>
#define QUANTIDADE_NOTAS 4
#define TAMANHO_DO_NOME 30

int main (){
	char nome[TAMANHO_DO_NOME];
	float nota [QUANTIDADE_NOTAS];
	float media = 0;
	int cont;

	printf("Qual o nome do aluno: ");
	scanf("%s",nome);
	for(cont = 0; cont<QUANTIDADE_NOTAS; cont++){
		printf("Digite a nota %d: ",cont + 1);
		scanf("%f",&nota[cont]);
		media = media + nota[cont];
	}
	printf("A media e %.2f", media / QUANTIDADE_NOTAS);
}
