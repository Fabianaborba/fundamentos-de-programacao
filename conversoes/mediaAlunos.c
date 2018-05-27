#include<stdio.h>
#include<stdlib.h>

int main(){
 	float num1  = 0,
 		    num2  = 0,
 	 	    num3  = 0,
 	 	    media = 0;

 	printf("Nota 1: ");
 	scanf("%f", &num1);
 	printf("Nota 2: ");
 	scanf("%f", &num2);
 	printf("Nota 3: ");
 	scanf("%f", &num3);

 	media = (num1 + num2 + num3) / 3;

 	printf("\n\n");

 	if (media >= 7){
 		printf("Aprovado!\n");
 		printf("Media: %.2f", media);
 	}else{
 		printf("Reprovado!\n");
 		printf("Media: %.2f", media);
 	}

  printf("\n\n");
  system("pause");
  return 0;
}
