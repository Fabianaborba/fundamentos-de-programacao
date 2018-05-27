#include<stdio.h>
#include<stdlib.h>

int main(){
	int numero = 0,
		  primo = 0,
		  resto = 0;
		  resto = 0;

  printf("Digite um numero inteiro positivo: ");
  scanf("%d",&numero);

  for(primo = 1; primo <= numero; primo++){
    if(numero % primo == 0){
      resto++;
    }
  }

  if(resto > 2){
    printf("%d nao e primo", numero);
  }else{
    printf("%d e primo", numero);
  }

  return 0;
}
