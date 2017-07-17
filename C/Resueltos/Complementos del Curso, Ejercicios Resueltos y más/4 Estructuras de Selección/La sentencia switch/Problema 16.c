/*16. Hace un menu que considere las siguientes opciones:

caso 1: Cubo de un numero
caso 2: Numero par o impar
case 3: salir */ 

#include<stdio.h>
#include<math.h>

int main(){
	int numero, n1,n2,opcion,cubo;
	
	printf("\tMENU");
	printf("\n1. Cubo de un numero");
	printf("\n2. Numero par o impar");
	printf("\n3. Salir");
	printf("\nOpcion: ");
	scanf("%i",&opcion);
	
	switch(opcion){
		case 1: 
			printf("\nDigite un numero: ");
			scanf("%i",&numero);
			cubo = pow(numero,3);
			printf("El cubo del numero es: %i",cubo);
		break;
		case 2: 
			printf("\nDigite un numero: ");
			scanf("%i",&numero);
			if(numero % 2 == 0){
				printf("El numero es par");
			}
			else{
				printf("El numero es impar");
			}
		break;
		case 3: break;
		default: printf("Opcion no valida");	
	}
	
	return 0;
}
