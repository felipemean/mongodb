/*14. Pedir una cadena al usuario y luego invertirla. diciendo ademas cuantos 
caracteres tiene.*/

#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
	char palabra[30];
	char palabra1[20], palabra2[20];

	printf("Digite una palabra: "); //Pedimos la cadena al usuario
	gets(palabra);
	
	strrev(palabra);  //invertimos la palabra con la funcion strrev
	 
	printf("Cadena Invertida: %s",palabra); //Imprimimos la cadena invertida
	printf("\nCaracteres totales: %i\n",strlen(palabra)); //Mostramos la cantidad de 
														//caracteres que tiene.
	getch();
		printf("Digite una palabra: "); //Pedimos la cadena al usuario
	gets(palabra1);
		printf("Digite una palabra: "); //Pedimos la cadena al usuario
	gets(palabra2);
	
	strupr(palabra1);
	strupr(palabra2);
	printf("\n\t Las palabras invertidas son:\n\t Palabra1:  %s\t y   Palabra2:	%s", palabra1,palabra2);
	
	if(strcmp(palabra1,palabra2) ==0 ){
		printf("\n\t Las dos palabras son IDENTICAS");
	}
	return 0;
}
