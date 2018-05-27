#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main (){
	int posicao, an, an1, an2, contador;
	
	setlocale(LC_ALL, "");
	
	printf("Até qual posição: (Maior que 2)");
	scanf("%d",&posicao);
	
	if(posicao > 2){
		an1 = 1;
		an2 = 1;
		printf("\n%d, %d, ", an1, an2);
		for(contador = 3; contador <= posicao; contador++){
			an = an1 + an2;
			an1 = an2;
			an2 = an;
			printf("%d, ",an);
		}
		printf("...\n");
	}else{
		printf("Por favor digite um número maior que 2!");
	}
}
