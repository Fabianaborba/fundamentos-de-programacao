#include<stdio.h>
#include<stdlib.h>

int main(){
	int numero,
  		resto;

	printf("Informe um numero: ");
	scanf("%d", &numero);

	resto = numero % 2;

	printf("O numero informado e ");

  if(resto == 0){
    printf("par.\n\n");
  }
  else{
    printf("impar.\n\n");
  }

  system("pause");
  return 0;
}
