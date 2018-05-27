#include<stdio.h>
#include<stdlib.h>

int main(){
 	int idade,
      nascimento,
      ano,
      maioridade;
 	char nome[256];

 	ano = 2018;
 	maioridade = 18;

 	printf("Digite o seu nome: ");
 	fgets(nome, sizeof(nome), stdin);

 	printf("Informe o ano de nascimento: ");
 	scanf("%d", &nascimento);

 	idade = ano - nascimento;

 	printf("\n\n");

 	if(idade >= 18){
 		printf("Maior de Idade!\n");
 		printf("Idade: %d", idade);
 	}else{
 		printf("Menor de Idade!\n");
 		printf("Idade: %d", idade);
 	}

 	printf("\n\n");
 	system("pause");
  return 0;
}
