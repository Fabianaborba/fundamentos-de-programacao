#include <stdio.h>

int a, b, c;

int glauco(int a, int b, int c){
	
	if (a < b && a < c){
		printf("\n%d e o menor numero", a);
	} else
	if (b < a && b < c){
		printf("\n%d e o menor numero", b);
	} else 
	if (c < a && c < b){
		printf("\n%d e o menor numero", c);
	}else
	if (c == a && c == b){
		printf("\n%d e o menor numero", c);
	} else
	if (c == a && c > b){
		printf("\n%d e o menor numero", c);
	} else
	if (c == b && c > a){
		printf("\n%d e o menor numero", c);
	} else
	if (a == b && c < a){
		printf("\n%d e o menor numero", c);
	}
}

int main(){
	printf("Digite 3 numeros separados:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	glauco(a, b, c);
	
	return 0;
}
