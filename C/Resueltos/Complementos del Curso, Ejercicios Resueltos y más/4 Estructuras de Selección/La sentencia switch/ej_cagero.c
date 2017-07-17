// Menu  CAJERO automatico   
// \t  dehja 4 espacios
#include<stdio.h>
int main(){
	int opcion;
	float agregar,saldo = 1000,retirar;
	printf("\tBienvenido a su cajero Automatico");
		printf("\n1. Ingreso encuenta");
		printf("\n2. Retirar dinero de la encuenta");
		printf("\n3. Salir");
		printf("\n\nOpcion:\n");
		scanf("%i", &opcion);
		switch(opcion){
			case 1:  printf("Cuanto dinero desea ingresar en cuenta: \n");
						scanf("%f", &agregar);
						saldo += agregar;
						printf("El saldo total es de : %.2f", saldo);
			break;
			
			case 2:  printf("Cuanto dinero desea retirar en cuenta: \n");
						scanf("%f", &retirar);
						if( retirar <= saldo){
							saldo -= retirar;
								printf("El saldo total es de : %.2f", saldo);
						}else{
								printf("El saldo total es menor que el dinero a retirar", saldo);
						}
						
			break;
			case 3:  break;
			
			default: printf("Digite la opcion CORRECTA");
		}
	
	return 0;
}
