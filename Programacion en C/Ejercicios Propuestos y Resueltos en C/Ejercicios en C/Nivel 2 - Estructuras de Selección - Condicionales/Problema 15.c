/*15. Hacer un programa que simule un cajero automático con un saldo inicial de 
1000 Dolares.*/ 

#include<stdio.h>

int main(){
	int saldo_inicial=1000,opcion;
	float  saldo, retiro, agregar;
	
	printf("Bienvenido a su cajero Virtual");
	printf("\nDigite la opcion de su preferencia");
	printf("\n1. Ingresar dinero en cuenta");
	printf("\n2. Retirar dinero de la cuenta");
	printf("\n3. Ver dinero disponible en cuenta");
	printf("\n4. Salir");
	printf("\nOpcion: ");
	scanf("%i",&opcion);
	
	switch(opcion){
		case 1: 
			printf("\nDigite la cantidad que desea ingresar: ");
			scanf("%f",&agregar);
			saldo = saldo_inicial + agregar;
			printf("El saldo actual es: %.2f",saldo);break;
		case 2:
			printf("\nDigite la cantidad que desea retirar: ");
			scanf("%f",&retiro);
			if(retiro>saldo_inicial){
				printf("La cantidad solicitada es mayor al saldo");
			}
			else{
				saldo = saldo_inicial - retiro;
				printf("El saldo actual es de: %.2f",saldo);
			}break;
		case 3: printf("El dinero disponible en cuenta es: %i",saldo_inicial);break;
		case 4: break;
		default: printf("Numero no disponible");		
	}
	
	return 0;
}
