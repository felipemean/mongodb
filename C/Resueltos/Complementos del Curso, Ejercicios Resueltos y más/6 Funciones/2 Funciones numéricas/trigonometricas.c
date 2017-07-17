//Funciones trigonometricas
#include<stdio.h>
#include<math.h>
void funciones_trigonometricas();
	
int main(){
	funciones_trigonometricas();
	
	return 0;
}

void	funciones_trigonometricas(){
		float x,cambio=0;
		printf("\n Teclea un numero : \t"); scanf("%f", &x);
		cambio = acos(x);
		printf("%.2f", cambio);
	}
	
