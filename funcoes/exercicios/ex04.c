#include<stdio.h>
#include<windows.h>

using namespace std;
int ciclo = 0;

void imprimeColorido () {
  // Escolhe randomicamente um padrão de cor entre 4 opções.
  HANDLE hConsole;
  hConsole = GetStdHandle (STD_OUTPUT_HANDLE);
  int xRan;
  xRan=rand()%4+1; // Escolhe randomicamente um número entre 1 e 4.

  if (xRan == 1) { // Padrão de cor 1
    if (ciclo == 0)
      SetConsoleTextAttribute (hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    if (ciclo == 1)
      SetConsoleTextAttribute (hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    if (ciclo == 2)
      SetConsoleTextAttribute (hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    if (ciclo == 3)
      SetConsoleTextAttribute (hConsole, 2);

    printf ("*");
  } else if (xRan == 2) { // Padrão de cor 2
    if (ciclo == 0)
      SetConsoleTextAttribute (hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    if (ciclo == 1)
      SetConsoleTextAttribute (hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    if (ciclo == 2)
      SetConsoleTextAttribute (hConsole, 2);
    if (ciclo == 3)
      SetConsoleTextAttribute (hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);

    printf ("*");
  } else if (xRan == 3) { // Padrão de cor 3
    if (ciclo == 0)
      SetConsoleTextAttribute (hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    if (ciclo == 1)
      SetConsoleTextAttribute (hConsole, 2);
    if (ciclo == 2)
      SetConsoleTextAttribute (hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    if (ciclo == 3)
      SetConsoleTextAttribute (hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

    printf ("*");
  } else if (xRan == 4) { // Padrão de cor 4
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
  int cont   = 0,
      j      = 0,
      k      = 1,
      n      = 0,
      cont2  = 0,
      numero = 0;

  printf ("Quantos niveis tem a arvore:");
  scanf ("%d", &numero);
  printf("\n");

  system("cls");
  for (int hh = 0; hh < 4; hh++) { // Pisca 4 vezes
    // Imprime a copa da árvore
    for (cont=1; cont<=numero; cont++) {
      for (j=numero; j>=cont; j--) {
        printf (" ");
      }

      for (k=1; k<=cont*2-1; k++) {
        imprimeColorido();
      }

      printf ("\n");
    }
    // Imprime o tronco da árvore. Sempre 3.
    for (cont2=numero/1.5; cont2<numero; cont2++){
      for (n=2; n<=k/2; n++) {
        printf (" ");
      }

      printf ("***\n");
    }

    ciclo = ciclo + 1;
    Sleep(1000);

    system("cls");
    if (hh == 3) { // Não deixa apagar a tela após a última piscada
        hh    = 0;
        ciclo = 0;
    }
  }

  return 0;
}
