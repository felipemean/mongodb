#include<stdio.h>
// Condicional MULTIPLE

int main (){
	char vehiculo;
	printf("Digite el tipo de vehiculo \n 1.- turismo \n 2.- autobus \n 3.- motocicleta) ): \n");
	scanf("%c",&vehiculo);
	switch(vehiculo){
		
		case '1': printf("PEAJE: $500"); break;
		case '2': printf("PEAJE: $3000"); break;
		case '3': printf("PEAJE: $300"); break;
		default: printf("NO ESCRIBIO bien el tipo de vehiculo");
	}
	
	return 0;
}
