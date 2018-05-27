#include<stdio.h>

int main () {
	char operacao;
	int resultado,
	  	primeiro,
	  	segundo;

	printf("Qual operacao matematica: ");
	scanf("%c", &operacao);
	printf("Qual o primeiro numero: ");
	scanf("%d", &primeiro);
	printf("Qual o segundo numero: ");
	scanf("%d", &segundo);

	switch(operacao) {
		case '+':
			resultado = primeiro + segundo;
			break;
		case '-':
			resultado = primeiro - segundo;
			break;
		case '*':
			resultado = primeiro * segundo;
			break;
		case '/':
			resultado = primeiro / segundo;
			break;
		default:
			printf("Valor invalido\n");
			resultado = 0;
			break;
	}

	printf("O resultado e %d", resultado);

  system("pause");
	return 0;
}
