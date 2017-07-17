/* Repeticion: El bucle do...while

	Sintaxis:
			
			do{
				Instruciones...		
			}while(condicion)			*/

//Mostrar los 10 primeros numeros
// Saludo

#include<stdio.h>

int main(){
	char opc;
	
	do{
		fflush(stdin);
		printf("Hola");
		printf("\nDesea otro saludo 's': ");
		scanf("%c",&opc);
	}while(opc == 's' || opc == 'S');	
	
	
	return 0;
}
