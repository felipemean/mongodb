/* Funciones Trigonometricas:

	acos(x)    -> Calcula el arco coseno de x. 
	asin(x)    -> Calcula el arco seno de x.
	atan(x)    -> Calcula el arco tangente de x.
	cos(x)     -> Calcula el coseno del angulo x, en radianes.
	sin(x)     -> Calcula el seno del angulo x, en radianes.
	tan(x)     -> Devuelve la tangente del angulo x, en radianes.
*/

#include<stdio.h>
#include<math.h>
void funciones_trigonometricas();

int main(){
	
	funciones_trigonometricas();
	
	return 0;
}

void funciones_trigonometricas(){
	float x,resultado=0;
	
	printf("Digite un numero: ");
	scanf("%f",&x);
	
	resultado = tan(x);
	
	printf("\n %.2f",resultado);

}


