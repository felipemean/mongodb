/*5. Copiar la cadena de caracteres "Hola mundo" de un array a otro. Luego cambiar 
la palabra "mundo" por "y bienvenido al lenguaje C".*/

#include<stdio.h>
#include<string.h>

int main(){
	char cad1[] ="Hola mundo";
	char cad2[30];
	
	strcpy(cad2,cad1); //Copiamos el contenido de cad1 hacia cad2.
	
	strcpy(cad2+5,"y bienvenido al lenguaje C"); //dejamos 5 espacios porque es lo que
												//ocupa mundo, y lo cambiamos por 
												//"y bienvenido al lenguaje C".
	
	printf("%s",cad2); //Imprimimos cad2
	
	
	
	return 0;
}
