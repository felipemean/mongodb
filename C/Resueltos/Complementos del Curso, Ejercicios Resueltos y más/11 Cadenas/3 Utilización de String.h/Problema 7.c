/*7. Utilizar la funcion strcat() para añadir un texto a un string.*/

#include<stdio.h>
#include<string.h>

int main(){
	char cad[] = "Hola que tal? ";
	
	strcat(cad,"Mi nombre es alejandro");
	
	//cad = Hola que tal? Mi nombre es alejandro
	
	printf("%s",cad);
	
	
	return 0;
}

