#include<stdio.h>
#include<string.h>

int main(){
	char cadena[60];
	
//	char cadena2[60];
	
	printf("\n Teclea una cadena de caracteres:	\n");
	gets(cadena);
	
	strcat(cadena,"   Que tengas un dia marvelos");
	
//	strcpy(cadena2+10, "Buena Broma");	
		printf("%s ",cadena);
	
//		printf("%s ",cadena2);
	
	
	return 0;
}
