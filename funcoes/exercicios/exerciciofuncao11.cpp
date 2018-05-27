#include <stdio.h>
#include <windows.h>

using namespace std;
int ciclo = 0;

void imprimeColorido () {
    //Escolhe randomicamente um padrão de cor entre 4 opções.
    
    HANDLE hConsole;    
    hConsole = GetStdHandle (STD_OUTPUT_HANDLE);
    int xRan;
    xRan=rand()%4+1; //Escolhe randomicamente um número entre 1 e 4.
    //Padrão de cor 1
    if (xRan == 1) {
        if (ciclo == 0)
            SetConsoleTextAttribute (hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
        if (ciclo == 1)
            SetConsoleTextAttribute (hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        if (ciclo == 2)
            SetConsoleTextAttribute (hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        if (ciclo == 3)
            SetConsoleTextAttribute (hConsole, 2);
        printf ("*");
    }
    //Padrão de cor 2
    else if (xRan == 2) {
        if (ciclo == 0)
            SetConsoleTextAttribute (hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        if (ciclo == 1)
            SetConsoleTextAttribute (hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        if (ciclo == 2)
            SetConsoleTextAttribute (hConsole, 2);
        if (ciclo == 3)
            SetConsoleTextAttribute (hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
        printf ("*");
    }
    //Padrão de cor 3
    else if (xRan == 3) {
        if (ciclo == 0)
            SetConsoleTextAttribute (hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        if (ciclo == 1)
            SetConsoleTextAttribute (hConsole, 2);
        if (ciclo == 2)
            SetConsoleTextAttribute (hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
        if (ciclo == 3)
            SetConsoleTextAttribute (hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        printf ("*");
    }
    //Padrão de cor 4
    else if (xRan == 4) {
        if (ciclo == 0)
            SetConsoleTextAttribute (hConsole, 2);
        if (ciclo == 1)
            SetConsoleTextAttribute (hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
        if (ciclo == 2)
            SetConsoleTextAttribute (hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        if (ciclo == 3)
            SetConsoleTextAttribute (hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        printf ("*");
    }
    else {
        SetConsoleTextAttribute (hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE );
    }    
    SetConsoleTextAttribute (hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE );
}

int main () {
    int cont, j, k=1,n ,cont2 , numero;
    printf ("Quantos niveis tem a arvore:");
     scanf ("%d", &numero);
     printf("\n");
     
     system("cls");
     for (int hh = 0; hh < 4; hh++) {  //Pisca 4 vezes

        //imprime a copa da árvore
         for (cont=1; cont<=numero; cont++){
              for (j=numero; j>=cont; j--)
                printf (" ");
              for (k=1; k<=cont*2-1; k++) {
                  imprimeColorido();
            }
              printf ("\n");
         }
         //imprime o tronco da árvore. Sempre 3.
          for (cont2=numero/1.5; cont2<numero; cont2++){
              for (n=2; n<=k/2; n++)
                   printf (" ");
             printf ("***\n");
         }
        ciclo = ciclo + 1;
        Sleep(1000);
        
        system("cls");
        if (hh == 3) { //Não deixa apagar a tela após a última piscada
            hh    = 0;
            ciclo = 0;
        }
    }
