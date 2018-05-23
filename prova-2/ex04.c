#include<stdlib.h>
#include<stdio.h>

int triangulo(int num1, int num2, int num3);
int modulo(int val1, int val2);

int main(){
	int num1 = 0,
	  	num2 = 0,
	  	num3 = 0;

	printf("Digite o valor do primeiro lado: ");
	scanf("%d", &num1);
	printf("Digite o valor do segundo lado: ");
	scanf("%d", &num2);
	printf("Digite o valor do terceiro lado: ");
	scanf("%d", &num3);

	if(triangulo(num1, num2, num3) == 1){
		printf("\nO objeto forma um triangulo.");
	}else{
		printf("\nO objeto nao forma um triangulo.");
	}
}

int triangulo(int num1, int num2, int num3){
	int diferenca = 0;
	if(num1 < num2 + num3){
		diferenca = modulo(num2, num3);
		if(num1 > diferenca){
			return 1;
		}
	}else if(num2 < num1 + num3){
		diferenca = modulo(num1, num3);
		if(num2 > diferenca){
			return 1;
		}
	}else if(num3 < num1 + num2){
		diferenca = modulo(num1, num2);
		if(num3 > diferenca){
			return 1;
		}
	}else{
		return 0;
	}
}

int modulo(int val1, int val2){
	float resultado = 0;

	resultado = val1 - val2;

	if (resultado <= 0) {
		resultado *= -1;
	}

	return resultado;
}
