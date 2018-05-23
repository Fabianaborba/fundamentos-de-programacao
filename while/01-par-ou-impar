#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
  setlocale(LC_ALL, "Portuguese");

  int num = 0;

  do{
    printf("Número: ");
    scanf("%d", &num);

    while(num % 2 == 0) {
      printf("Par\n");
      break;
    }

    while(num % 2 == 1) {
      printf("Ímpar\n");
      break;
    }
}while(true);

printf("\n");
return 0;
}
