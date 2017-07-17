/*	Funciones:

	- Funciones sin retorno de valor:
	
			void nombreFuncion( parametros ){
				Instrucciones...			
			}
			
	- Funciones con retorno de valor:
			
			tipo_dato nombreFuncion( parametros ){
				Instrucciones...
				return expresion			
			}
*/

//1. Saludo por pantalla con funcion void
//2. Sumar 2 numeros

#include<stdio.h>

//Prototipo
float sumar(float n1,float n2);

int main(){
	float a,b;
	
	printf("Digite 2 numeros: ");
	scanf("%f %f",&a,&b);
	
	printf("\n La suma es: %.2f",sumar(a,b));
	
	return 0;
}

float sumar(float n1,float n2){
	float suma = 0;
	
	suma  = n1 + n2;
	
	return suma;
}


