#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

  int cont = 0,
      num1 = 0,
      div  = 0;

  do{
    printf("Digite um número: ");
    scanf("%d", &num1);
  }

  while(num1 <= 0);
    for (cont = 1; cont <= num1; cont++) {
      if (num1 % cont == 0) {
        div++;
      }
    }
  if(div == 2){
    printf("%d é primo!", num1);
  }else{
    printf("%d não é primo!", num1);
  }

  printf("\n");
  return 0;
}
