#include<stdio.h>
#include<math.h>


void cubo();
void par();

int main(){
int numero;
	printf("\n Caso 1.- Teclea 1 para calcular el cubo de un Numero");
		printf("\n Caso 2.- Teclea2 averiguar si el numero tecleado es PAR o IMPAR");
			printf("\n Caso 3.- Teclea 3 para SALIR\n\n");
	
	scanf("%i", &numero);
	
	switch(numero) {
		case 1: cubo(); break;
		case 2: par(); break;
		case 3:  break;
		default: printf("Opcion no valida"); break;
		
	}	
return 0;
}
void cubo(){
		int cubo ,a;
	 printf("\n Teclea un numero:	"); scanf("%i",&a);
	 	cubo = pow(a,3);
	 printf("\n El cubo es %i, ", a*a*a);

	printf("\n El cubo  es :	%i", cubo);
}

void par(){
	int a;
	 printf("\n Teclea un numero:	"); scanf("%i",&a);
	if ( a%2 ==0){
			printf(" El numero %i  es PAR	",a);
	}else{
			printf(" El numero %i  es IMPPAR	",a);
	}
		

}
