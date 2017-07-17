/*6. Pedir al usuario que digite una cadena, luego copiar su contenido hacia otro
array de caracteres. y por ultimo modificar su mensaje poniendo a partir de la posicion
10 "Buena broma".*/

#include<stdio.h>
#include<string.h>

int main(){
	char cad1[20],cad2[20];
	
	printf("Digite un String: ");
	gets(cad1);
	
	strcpy(cad2,cad1); //Copiamos cad1 hacia cad2
	
	strcpy(cad2+10,"Buena Broma");
	
	printf("%s",cad2);
	
	return 0;
}
