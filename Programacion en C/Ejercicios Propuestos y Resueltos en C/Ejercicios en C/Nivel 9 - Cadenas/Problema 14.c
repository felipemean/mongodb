/*14. Pedir una cadena al usuario y luego invertirla. diciendo ademas cuantos 
caracteres tiene.*/

#include<stdio.h>
#include<string.h>

int main(){
	char palabra[30];
	
	printf("Digite una palabra: "); //Pedimos la cadena al usuario
	gets(palabra);
	
	strrev(palabra);  //invertimos la palabra con la funcion strrev
	
	printf("Cadena Invertida: %s",palabra); //Imprimimos la cadena invertida
	printf("\nCaracteres totales: %i",strlen(palabra)); //Mostramos la cantidad de 
														//caracteres que tiene.
	
	
	return 0;
}
