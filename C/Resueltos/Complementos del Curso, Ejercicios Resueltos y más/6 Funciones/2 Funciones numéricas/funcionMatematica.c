#include<stdio.h>
void	funcion_matematica();
int main(){
	funcion_matematica();
}

void funcion_matematica(){
		float x, cambio=0, absoluto, redondeo,resto,y;
		printf("\nDigite un numero: \n"); scanf("%f", &x);
		
		cambio = ceil(x);
		absoluto = fabs(x);
		redondeo = floor(x);
		resto = fmod(x);
		
		printf("\nProximo entero superior %.1f", cambio );
		printf("\nValor absoluto %.1f", absoluto );
				printf("\nRedondeo al numero anterior%.1f", redondeo );
				
				printf("\nRedondeo al numero anterior%.1f", redondeo );
	}
