#include <stdio.h>
#include <locale.h>

main(){
	int teste,testee;
	teste = 42;
	setlocale(LC_ALL,"");
	printf ("teste contém %d e está no endereço de memória %d.", teste, &teste);
}
