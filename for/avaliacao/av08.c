/* O PROGRAMÁ RECEBERÁ DEZ NÚMEROS E OS SOMARÁ */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int soma = 0,
		num  = 0,
		i    = 0;
			
	for (i = 1; i <= 10; i++) {
		printf("Escreva o %dº número: ", i);
		scanf("%d", &num);
		
        soma += num;
    }
    
    printf("\nSoma dos dez números: %d\n", soma);
    
	system("pause");
	system("cls");
    return(0);
}
