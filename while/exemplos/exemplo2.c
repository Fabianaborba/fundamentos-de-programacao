#include <stdio.h>

int main(){
	int number;
	unsigned long long factorial;

	printf("Entre um inteiro: ");
	scanf("%d",&number);

	factorial = 1;
	while(number > 0){
		factorial *= number; --number;
	}

	printf("Fatorial: %llu", factorial);

  return 0;
}
