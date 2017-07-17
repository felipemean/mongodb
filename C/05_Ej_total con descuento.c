/* Una tienda ofrece un descuento del 15% sobre el total de la compra y
	un cliente desea saber cuánto deberá pagar finalmene por su compra
*/

#include<stdio.h>

int main () {
	float p1,p2,p3,total,subtotal,descuento; // precios de los articulos
	float porcentaje = 0.15;
	
	printf("\nCALCULO DE TOTAL a PAGAR con DESCUENTO del 15%\n");
	printf("\nDigita los precios de los tres articulos comprados\n");
	scanf("%f %f %f", &p1,&p2,&p3);
	subtotal = p1 + p2 + p3 ;
	descuento = subtotal * porcentaje ;
	total =  subtotal - descuento ;
	
	printf(" Total a pagar con un descuento del %2.f por ciento sobre  estos tres productos :\n   %.2f  %.2f %.2f  es :  %.2f", descuento, p1,p2,p3,total );
	
	
	return;
}
