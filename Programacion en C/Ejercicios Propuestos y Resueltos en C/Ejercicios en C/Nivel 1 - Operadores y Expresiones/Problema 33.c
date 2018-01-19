#include<stdio.h>
#include<math.h>


void cubo();
void par();
void inicio();

int main(){
	int numero;
	
	inicio();
	
	
return 0;
}

void inicio(){
	int numero;
	
	printf("\n Caso 1.- Teclea 1 para calcular el cubo de un Numero");
		printf("\n Caso 2.- Teclea2 averiguar si el numero tecleado es PAR o IMPAR");
			printf("\n Caso 3.- Teclea 3 o 0 para SALIR\n\n");
					
	scanf("%i", &numero);
	
	switch(numero) {
		case 1: cubo(); break;
		case 2: par(); break;
		case 0: ;;
		case 3:  printf(" Adios Palomo!!\n"); break;
		default: printf("Opcion no valida");;
		inicio();
		
	}	
	
}


void cubo(){
		int cubo ,a;
	 printf("\n Teclea un numero:	"); scanf("%i",&a);
	 	cubo = pow(a,3);
	 //printf("\n El cubo es %i, \n", a*a*a);

	printf("\n El cubo  es :	%i\n", cubo);
	inicio();
}

void par(){
	int a;
	 printf("\n Teclea un numero:	"); scanf("%i",&a);
	if ( a%2 ==0){
			printf(" El numero %i  es PAR	\n",a);
	}else{
			printf(" El numero %i  es IMPPAR	\n",a);
	}
	
	inicio();	

}
