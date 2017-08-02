/*6. Realice un programa que permita leer una cadena de caracteres y 
que devuelva el numero de caracteres que tiene dicha cadena e
imprimir dicha cadena al reves.*/

#include<stdio.h>
#include<conio.h>

int main(){
	char palabra[30];
	int i=0;
	
	printf("Digite una palabra: ");
	gets(palabra);
	
	while(palabra[i] != '\0'){
		i++;
	}
	
	printf("\n La palabra tiene: %i letras",i);
	
	printf("\n La palabra escrita al reves es: ");
	while(i>=0){
		printf("%c",palabra[i--]);
	}
	
	
	getch();
	return 0;
}


