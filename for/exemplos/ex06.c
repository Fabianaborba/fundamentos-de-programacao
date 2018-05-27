#include <stdio.h>
#include <stdlib.h>

main(){
	    int cont1,
		      cont2,
		      cont3,
		      resto;
	    printf("Digite o primeiro numero:  ");
	    scanf("%d",&cont1);
	    printf("Digite o segundo numero:  ");
	    scanf("%d",&cont2);
	    for (cont3 = cont1; cont3 <= cont2; cont3++){
		      resto = cont3 % 2;
		      if(resto == 0){
			        printf("%d\n",cont3);
		      }
	    }
  return 0;
}
