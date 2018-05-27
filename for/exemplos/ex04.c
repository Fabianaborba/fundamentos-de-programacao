#include<stdio.h>
#include<stdlib.h>

int main(){
	int primeiro = 0,
		  segundo  = 0,
		  numero   = 0;

	printf("Digite o primeiro numero:  ");
	scanf("%d",&primeiro);
	printf("Digite o segundo numero:  ");
	scanf("%d",&segundo);

	if(primeiro < segundo) {
		for(numero = primeiro + 1; numero < segundo; numero++){
			printf("%d esta entre %d e %d\n", numero, primeiro, segundo);
		}
  }else if(primeiro > segundo){
		for(numero = segundo + 1; numero < primeiro; numero++){
			printf("%d esta entre %d e %d\n", numero, primeiro, segundo);
		}
  }else{
    printf("Nao ha numeros entre %d e %d", primeiro, segundo);
  }

	return 0;
}
