/* Funciones Matematicas: 

	ceil(x)   -> Redondea al proximo entero mas cercano.
	fabs(x)   -> Devuelve el valor absoluto de x.
	floor(x)  -> Redondea por defecto al entero mas proximo.
	fmod(x,y) -> Calcula el resto de la division de x/y.
	pow(x,y)  -> Calcula x elevado a la potencia y.
	sqrt(x)   -> Devuelve la raiz cuadrada de x.
*/

#include<stdio.h>

void funciones_matematicas();

int main(){
	
	funciones_matematicas();
	
	return 0;
}

void funciones_matematicas(){
	float x,cambio;
	
	printf("Digite un numero: ");
	scanf("%f",&x);
	
	cambio = sqrt(x);
	
	printf("\n %.2f",cambio);
	
}

