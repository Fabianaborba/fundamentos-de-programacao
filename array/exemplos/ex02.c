#include<stdio.h>
#include<windows.h>

#define LINHAS  5
#define COLUNAS 4

void gotoxy(short col, short row);
void escreveLetra(short col, short row, char letra[LINHAS][COLUNAS]);

main() {
  char letraF[LINHAS][COLUNAS] = {
    {219,219,219,219},
    {219, 32, 32, 32},
    {219,219,219,219},
    {219, 32, 32, 32},
    {219, 32, 32, 32}
  };
  char letraO[LINHAS][COLUNAS] = {
    {219,219,219,219},
    {219, 32, 32,219},
    {219, 32, 32,219},
    {219, 32, 32,219},
    {219,219,219,219}
  };
  char letraC[LINHAS][COLUNAS] = {
    {219,219,219,219},
    {219, 32, 32, 32},
    {219, 32, 32, 32},
    {219, 32, 32, 32},
    {219,219,219,219}
  };
  char letraA[LINHAS][COLUNAS] = {
    {219,219,219,219},
    {219, 32, 32,219},
    {219,219,219,219},
    {219, 32, 32,219},
    {219, 32, 32,219}
  };

  escreveLetra(25, 10, letraC );
  escreveLetra(31, 10, letraA );
  escreveLetra(37, 10, letraC );
  escreveLetra(43, 10, letraA );
  escreveLetra(49, 10, letraC );
  escreveLetra(55, 10, letraA );
}

void escreveLetra(short col, short row,char letra[LINHAS][COLUNAS]) {
  int linha,coluna;

  for(linha = 0; linha < LINHAS; linha++) {
  	for(coluna = 0; coluna < COLUNAS; coluna++) {
		  gotoxy(col + coluna, row + linha);
  		printf("%c", letra[linha][coluna]);
  	}
  }
}

void gotoxy(short x, short y) {
  COORD pos = {x, y};
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
