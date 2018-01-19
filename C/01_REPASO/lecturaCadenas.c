#include<stdio.h>


int main(){
		char palabra[20];
	char nombre[20];
/*	
	printf("Teclea tu nombre:	");
	scanf("%s",nombre);  // lee hasta encontrar un salto de linea o espacio
	printf("\n Nombre :   %s", nombre);	   */
/*	
	do{
		scanf("%s",palabra);
		
		if(!feof(stdin)){
			printf("%s ",palabra);
		}
		
	}while(!feof(stdin));
*/
	printf("Teclea tu nombre:	");
	gets(nombre);  							
	printf("\n Nombre :   %s", nombre);
	return 0;
}
