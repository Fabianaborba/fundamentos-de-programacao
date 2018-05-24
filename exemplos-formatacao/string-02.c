#include<stdio.h>
#include<string.h>

int main() {
	char str1[12] = "Hello";
	char str2[12] = "World";
	char str3[12];
	int len;
	
	strcpy(str3, str1); // copia
	printf("strcpy( str3, str1): %s\n", str3);
	strcat(str1, str2); //concatenar
	printf("strcat(str1, str2): %s\n", str1);
	len = strlen(str1); //tamanho
	printf("strlen(str1) : %d\n", len);
	return 0;
	
}
