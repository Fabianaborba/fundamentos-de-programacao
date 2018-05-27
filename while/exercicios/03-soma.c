#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

  int num1 = 0,
      num2 = 0,
      soma = 0;

printf("Primeiro número: ");
scanf("%d", &num1);

printf("Segundo número: ");
scanf("%d", &num2);

while(num1 <= num2){
  soma += num1;
  num1++;
}

  printf("\nSoma dos números: %d", soma);

  printf("\n");
  return 0;
}
