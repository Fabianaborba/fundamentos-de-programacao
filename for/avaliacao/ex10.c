/* O PROGRAMA RECEBERÁ UM VALOR E IMPRIMIRÁ UMA
ESCADA DE NÚMEROS DE ACORDO COM O VALOR ESTABELECIDO */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

    int cont = 0,
        num  = 0,
        i    = 0,
        j    = 1;

    printf("Insira um número: ");
    scanf("%d", &num);

    for(cont = 1; cont <= num; cont++){
        printf("%d", cont);
        i++;

        if(i == j) {
            printf("\n");
            j++;
            i = 0;
        }
    }

    printf("\n");
    system("pause");
    system("cls");
    return 0;
}
