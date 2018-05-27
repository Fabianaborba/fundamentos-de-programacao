/* O PROGRAMA RECEBERÁ UM VALOR E IMPRIMIRÁ UMA ÁRVORE
DE NATAL DO TAMANHO DE ACORDO COM O VALOR */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

using namespace std;
int ciclo = 0;

void imprimeColorido(){
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	int xRan;

	xRan = rand() % 4 + 1;

	if(xRan == 1){
		if(ciclo == 0){
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
		}
		if(ciclo == 1){
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		}
		if(ciclo == 2){
			SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		}
		if(ciclo == 3){
			SetConsoleTextAttribute(hConsole, 2);
		}
		printf("*");
	}else if(xRan == 2){
        if(ciclo == 0){
            SetConsoleTextAttribute (hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		}
        if(ciclo == 1){
            SetConsoleTextAttribute (hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		}
        if(ciclo == 2){
            SetConsoleTextAttribute (hConsole, 2);
		}
        if(ciclo == 3){
            SetConsoleTextAttribute (hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
		}
        printf ("*");
    }else if(xRan == 3) {
        if(ciclo == 0){
            SetConsoleTextAttribute (hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		}
        if(ciclo == 1){
            SetConsoleTextAttribute (hConsole, 2);
		}
        if(ciclo == 2){
            SetConsoleTextAttribute (hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
		}
        if(ciclo == 3){
			SetConsoleTextAttribute (hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		}
        printf ("*");
    }else if(xRan == 4) {
        if(ciclo == 0){
            SetConsoleTextAttribute (hConsole, 2);
		}
        if(ciclo == 1){
            SetConsoleTextAttribute (hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
		}
        if(ciclo == 2){
            SetConsoleTextAttribute (hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		}	
        if(ciclo == 3){
            SetConsoleTextAttribute (hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		}
        printf ("*");
    }
    else{
        SetConsoleTextAttribute (hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE );
    }    
	SetConsoleTextAttribute (hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE );
}

int main () {
    int cont   = 0,
		j      = 0,
		k      = 1,
		n      = 0,
		cont2  = 0,
		numero = 0;
	printf ("Informe quantos níveis terá a árvore: ");
	scanf ("%d", &numero);
	printf("\n");
     
	system("cls");
	for (int hh = 0; hh < 4; hh++){
		for (cont=1; cont<=numero; cont++){
			for (j=numero; j>=cont; j--){
				printf (" ");
			}
			for (k=1; k<=cont*2-1; k++){
				imprimeColorido();
			}
			printf ("\n");
		}
		for (cont2=numero/1.5; cont2<numero; cont2++){
			for (n=2; n<=k/2; n++){
				printf (" ");
			}
			printf ("***\n");
		}

        ciclo = ciclo + 1;
        Sleep(1000);

        system("cls");
		if (hh == 3) {
			hh    = 0;
			ciclo = 0;
        }
	}
}
