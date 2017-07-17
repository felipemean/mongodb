#include<stdio.h>
void	funcion_matematica();
int main(){
	funcion_matematica();
}

void funcion_matematica(){
		float x, residuo=0,y, potencia=0, raizCuadrada;
		printf("\nDigite dos numero2: \n"); scanf("%f %f", &x, &y);

		residuo = fmod(x,y);
		potencia =pow(x,y);
		raizCuadrada =	sqrt(x);
		printf("\nResto de dos numeros :\t%.1f", residuo );
		printf("\nLa raiz cuadrada es :\t%.1f", raizCuadrada );		
		printf("\n %.2f elevado a %.2f :\t%.1f", x, y, potencia );
	}
