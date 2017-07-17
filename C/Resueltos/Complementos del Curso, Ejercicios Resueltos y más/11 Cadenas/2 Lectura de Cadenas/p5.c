#include<stdio.h>
#include<string.h>

int main(){
	char cad1[] = "Hola Mundo";
	char cad2[30];
	
	strcpy(cad2, cad1);
	
	strcpy(cad2+5, "y bienvenido al lenguaje C");  // Empieza en la posicion 5 y machaca Mundo
	printf("%s ",cad2);
	
	return 0;
}

