// invertir una cadea con strrev()
#include<stdio.h>
#include<string.h>

int main(){
	char palabra[] = "Hola";
	char palabra1[30];
	
	strrev(palabra);
	
	printf("\n\t Palabra invertida: %s  \n", palabra);
	
	printf("\n\n\t Para salir de la aplicaion teclea * ");
/*	do {
		printf("\n\t Teclea tu palabra favorita:	"); gets(palabra1);
	
	strrev(palabra1);
	printf("\n\n\t Tu Palabra favorita invertida es: \n\t%s \n ", palabra1);
	}
	while ( strcmp(palabra1, "*") != 0);
*/	
	while ( strcmp(palabra1, "*") != 0){
		printf("\n\t Teclea tu palabra favorita:	"); gets(palabra1);
			if( strcmp(palabra1,"*") == 0){
				break;
			}else{
				strrev(palabra1);
		printf("\n\n\t Tu Palabra favorita invertida es: \n\t%s \n ", palabra1);
			}
		
	}	
	
	
	
	
	
	
	printf("\n\t Espero que  te haya  gustado?\n\t ADIOS	"); 
	
	
	
	return 0;
	
}
