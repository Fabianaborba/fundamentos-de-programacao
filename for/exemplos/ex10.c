#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main (){
	int posicao = 0,
      an      = 0,
      an1     = 0,
      an2     = 0,
      cont    = 0;

	setlocale(LC_ALL, "");

	printf("Até qual posição: (Maior que 2)");
	scanf("%d", &posicao);

	if(posicao > 2){
		an1 = 1;
		an2 = 1;

    printf("\n%d, %d, ", an1, an2);

    for(cont = 3; cont <= posicao; cont++){
			an = an1 + an2;
			an1 = an2;
			an2 = an;

      printf("%d, ",an);
		}

		printf("...\n");
	}else{
		printf("Por favor digite um número maior que 2!");
	}

  return 0;
}
