#include <stdio.h>
#include <stdlib.h>

main()
{
	int primeiro,
		segundo,
		numero;
	printf("Digite o primeiro numero:  ");
	scanf("%d",&primeiro);
	printf("Digite o segundo numero:  ");
	scanf("%d",&segundo);
	if (primeiro < segundo) {
		for (numero = primeiro + 1;numero < segundo;numero++){
			printf("%d esta entre %d e %d\n",numero,primeiro,segundo);
		}
		}else if(primeiro > segundo){
		
		for (numero = segundo + 1;numero < primeiro;numero++){
			printf("%d esta entre %d e %d\n",numero,primeiro,segundo);
		}
		
		}else{
			printf("Nao a numeros entre %d e %d",primeiro,segundo);
		}
		return 0;
	}
