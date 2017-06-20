// suma 1-2+3-4.......
#include<stdio.h>
#define PI 3.1416
int main(){
	float radio,  longitud;

	printf("Suma de pares desde n hasta m");
	printf("\n\tDigite el radio de la circunferencia:\n"); scanf("%f", &radio);

	longitud = radio * PI;
	printf("\n La longitud de la circunferencia   es \n\t\t%.2f:", longitud); 
	return 0;
}
