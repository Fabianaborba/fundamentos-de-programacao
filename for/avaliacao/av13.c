/* O PROGRAMA RECEBERÁ UMA FRASE E
REMOVERÁ OS ESPAÇOS DELA */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
#include<string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i        = 0,
		j        = 0,
		tamFrase = 0;
	char frase[255],
         novaFrase[255];

    printf("Digite uma frase: ");
	gets(frase);

    tamFrase = strlen(frase);

	for(i = 0; i <= tamFrase; i++){
        if(frase[i] != ' '){
            novaFrase[j] = frase[i];
            j++;
        }
	}

    printf("Frase sem espaços: %s", novaFrase);

    printf("\n");
    system("pause");
    system("cls");
    return 0;
}
