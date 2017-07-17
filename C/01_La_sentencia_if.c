// programación secuencia-------   todo seguido
// la programación condicional -----------  se ejecutan acciones o no , segun unas condiciones
// prueba de visibilidad

#include<stdio.h>
int main(){
	
	int n1,n2;
	printf("digita 2 numeros: \n");	scanf("%i %i", &n1, &n2);
	/* divide n1 y n2 y % "MODULO" nos devuelve el residuo de la division(resto). 
	si el resultado es igual a cero implica que son divisibles */	
	if (n1 % n2 == 0) {
			printf("\n el numero %i es divisilbe por el %i", n1, n2);
		}else 	
		{
				printf("\n el numero %i NO es divisilbe por el %i", n1, n2);
		}
	return 0;
}
