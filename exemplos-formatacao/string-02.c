#include<stdio.h>
#include<string.h>

int main() {
	char str1[12] = "Hello",
	     str2[12] = "World",
	     str3[12];
	int len = 0;

	strcpy(str3, str1); // copiar
	printf("strcpy( str3, str1): %s\n", str3);
	strcat(str1, str2); //concatenar
	printf("strcat(str1, str2): %s\n", str1);
	len = strlen(str1); //tamanho
	printf("strlen(str1) : %d\n", len);

	return 0;
}
