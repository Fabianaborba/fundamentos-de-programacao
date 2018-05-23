#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
  setlocale(LC_ALL, "Portuguese");

  int num1 = 0,
      num2 = 0;

  printf("Primeiro número: ");
  scanf("%d", &num1);

  printf("Segundo número: ");
  scanf("%d", &num2);

  printf("\n");

  while (num1 < num2) {
    if (num1 % 2 == 0) {
      printf("%d", num1);
      printf("\n");
    }
    num1++;
  }

  printf("\n");
  return 0;
}
