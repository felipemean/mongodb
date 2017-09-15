/*9. Utilizar la funcion strcmp() para comparar dos palabras.*/

#include<stdio.h>
#include<string.h>

int main(){
	char cad1[] = "Hola";
	char cad2[] = "Hola que tal";
	
	if(strcmp(cad1,cad2)==0){
		printf("Ambas cadenas son iguales");	
	}
	else{
		printf("Las cadenas son distintas");
	}
	
	
	return 0;
}
