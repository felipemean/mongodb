//programa que calcule longitud y circunferencia
/* L= pi * diametro =pi *2*radio

*/
#include<stdio.h>
#include<math.h>

int main(){
	float radio,longitud;
	float PI = 3.1415;
	
	printf("\n Introduce el radio de la circunferencia : \n");
	scanf("%f", &radio);
	
	longitud = radio * 2 * PI ;
	
	printf("La longitud de la circunferencia es  :  %.2f",longitud);
	return;
}
