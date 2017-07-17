/*10.Una distribuidora de motocicletas tiene una promoción de fin de año que 
consiste en lo siguiente. Las motos marca Honda tienen un descuento del 5%, 
las marcas Yamaha del 8% y las Suzuki del 10%, las otras marcas 2%*/

#include<stdio.h>

int main(){
	char marca[20];
	float precio,descuento,precioFinal=0;
	
	printf("Digite la marca de su moto: ");
	gets(marca);
	printf("Digite el precio de la moto: ");
	scanf("%f",&precio);
	
	if(strcmp(marca,"honda")==0){
		descuento = precio * 0.05;
		precioFinal = precio - descuento;
		printf("El precio final es: %f",precioFinal); 
	}
	else if(strcmp(marca,"yamaha")==0){
		descuento = precio*0.08;
		precioFinal = precio - descuento;
		printf("El precio final es: %f",precioFinal);		
	}
	else if(strcmp(marca,"suzuki")==0){
		descuento = precio*0.1;
		precioFinal = precio-descuento;
		printf("El precio final es: %f",precioFinal);		
	}
	else{
		descuento = precio * 0.02;
		precioFinal = precio - descuento;
		printf("El precio final es: %f",precioFinal);
	}
	
	
	return 0;
}
