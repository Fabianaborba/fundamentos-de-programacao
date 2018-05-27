#include<stdio.h>
#include<float.h>

int main(){
	printf("Float      : %d\n", sizeof(float));
	printf("Menor float: %E\n", FLT_MIN);
	printf("Maior float: %E\n", FLT_MAX);
	printf("Presisao   : %d\n", FLT_DIG);

	return 0;
}
