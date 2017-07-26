// getch y getch de la libreria conio
#include<stdio.h>
#include<conio.h>

int main(){
	
	char caracter;
	
	printf("Teclea un caracter:	\n");
	
	caracter = getch();
	
		printf("El caracter que has tecleado es:	%c	\n", caracter);
	
	
	return 0;
}
