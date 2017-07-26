// getch y getch de la libreria conio
#include<stdio.h>
#include<conio.h>

int main(){
	
	char caracter;
	
	printf("Teclea un caracter:	\n\n");
	
	caracter = getche();
	
		printf("\n\n	El caracter que has tecleado es:	%c	\n", caracter);
	
	
	return 0;
}
