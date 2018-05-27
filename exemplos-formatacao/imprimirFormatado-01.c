#include<stdio.h>
#include<locale.h>

int main(){
  setlocale(LC_ALL,"");

  int teste = 42;

	printf ("A variável teste contém %d e está no endereço de memória %d.", teste, &teste);
}
