#include<stdio.h>

int main (){
	float total_compra,descuento,precio;
	
	printf("Digite el total de compra:  \n");
	scanf("%f",&total_compra);
	
	descuento = total_compra  * 0.15 ;
	precio =total_compra - descuento; 
	
	printf("El precio final de la compra es:  $%.2f", precio );
	 
	return 0;
}
