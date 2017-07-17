#include<stdio.h>
#include<string.h>

int main(){
	char cadena[60];
	
	char cadena2[60];
	
	printf("\n Teclea una cadena de caracteres:	\n");
	gets(cadena);
	
	strcpy(cadena2, cadena);
	
	strcpy(cadena2+10, "Buena Broma");	
	
		printf("%s ",cadena2);
	
	
	return 0;
}
