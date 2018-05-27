#include<stdio.h>

int menorValor(int a, int b, int c){
	if(a < b && a < c){
		printf("\n%d e o menor numero", a);
	}else if(b < a && b < c){
		printf("\n%d e o menor numero", b);
	}else if(c < a && c < b){
		printf("\n%d e o menor numero", c);
	}else if(c == a && c == b){
		printf("\n%d e o menor numero", c);
	}else if(c == a && c > b){
		printf("\n%d e o menor numero", c);
	}else if(c == b && c > a){
		printf("\n%d e o menor numero", c);
	}else if(a == b && c < a){
		printf("\n%d e o menor numero", c);
	}
}

int main(){
  int a = 0,
      b = 0,
      c = 0;

	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	printf("Digite o terceiro numero: ");
	scanf("%d", &c);

	menorValor(a, b, c);

	return 0;
}
