#include<stdio.h>
// Condicional MULTIPLE

int main (){
	char vehiculo[30];
	printf("Digite el tipo de vehiculo (turismo, autobus, motocicleta) ): \n");
	gets(vehiculo);
	switch(vehiculo){
		
		case 'turismo': printf("PEAJE: $500"); break;
		case 'autobus': printf("PEAJE: $3000"); break;
		case 'motocicleta': printf("PEAJE: $300"); break;
		default: printf("NO ESCRIBIO bien el tipo de vehiculo");
	}
	
	return 0;
}
