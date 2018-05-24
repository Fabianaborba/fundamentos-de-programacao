#include <stdio.h>

main(){
	printf ("%.5d",314); 			  //exibe 00314
	printf ("\n");
	printf ("%.5f",2,4);              //exibe 2.40000
	printf ("\n");
	printf ("%.5g",23456789012345);   //exibe 2.3457e+13
	printf ("\n");
	printf ("%.5s","Bom dia");        //exibe Bom d
	printf ("\n");
}
