#include <stdio.h>
#include <stdlib.h>

#define MAX 10
#define START 0
main()
{
		int contador;
		//       início      fim         passo 
		for(contador = START;contador < MAX;contador = contador + 1)
		{
			printf("contando -> %d\n",contador);
		}
		
		return EXIT_SUCCESS;
}
