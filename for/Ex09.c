/* O PROGRAMA RECEBERÁ UM VALOR E IMPRIMIRÁ UMA ESCADA
DE ASTERISCOS DO TAMANHO DE ACORDO COM O VALOR */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

	int i   = 0,
        j   = 0,
        k   = 1,
        n   = 0,
        m   = 0,
        num = 0;
 	
    printf ("Insira um número: ");
    scanf ("%d", &num);

 	printf("\n");
 	
     for (i=1; i<=num; i++){
  		for (j=num; j<=i; j++)
		printf ("");
  		for (k=1; k<=i*1; k++)
		printf ("*");
  		printf ("\n");
 	}

    getchar();
	
    printf("\n");
    system("pause");
    system("cls");
	return 0;
}
