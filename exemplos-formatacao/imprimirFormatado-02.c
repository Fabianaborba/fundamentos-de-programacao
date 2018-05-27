#include<stdio.h>

int main(){
	printf("%.5d\n", 314); 			      // exibe 00314
	printf("%.5f\n", 2.4);            // exibe 2.40000
	printf("%.5g\n", 23456789012345); // exibe 2.3457e+13
	printf("%.5s\n", "Bom dia");      // exibe Bom d
}
