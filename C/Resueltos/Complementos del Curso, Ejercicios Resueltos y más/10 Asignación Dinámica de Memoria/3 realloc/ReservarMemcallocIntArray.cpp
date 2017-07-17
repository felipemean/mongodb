
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char *c, palabra[50];
	
	printf("Digite un palabra (String): ");
	gets(palabra);
	
	//palabra\0
	
	c = calloc(strlen(palabra)+1,sizeof(char));
	
	strcpy(c,palabra);
	
	printf("Palabra: %s",c);
	
	free(c);	
	return 0;
}
