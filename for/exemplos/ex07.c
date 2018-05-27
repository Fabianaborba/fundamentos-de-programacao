#include<stdio.h>
#include<stdlib.h>

#define MAX   10
#define START 0

int main(){
  int contador = 0;

  for(contador = START; contador < MAX; contador++){
    printf("contando -> %d\n",contador);
  }

  return EXIT_SUCCESS;
}
