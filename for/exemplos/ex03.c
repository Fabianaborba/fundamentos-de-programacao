#include <stdio.h>
#include <stdlib.h>

main()
{
	int numero,
		primo,
		resto;
		resto = 0;
		
		printf("Digite um numero inteiro positivo: ");
		scanf("%d",&numero);
		for(primo = 1;primo <= numero; primo++){
			if(numero % primo == 0){
			resto++;
			}
		}
		if(resto > 2){
			printf("%d nao e primo", numero);
		}else{
			printf("%d e primo", numero);
		}
return 0;
}
