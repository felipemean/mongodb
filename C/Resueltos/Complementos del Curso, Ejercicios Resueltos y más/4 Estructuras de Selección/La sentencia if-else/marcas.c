// motos marca honda descuento 5%
// yamaha 8%
// suzuki 10%
//el resto2%
#include<stdio.h>
#include<stdlib.h>

int main(){
	char marca[20];
	float descuento;
	
	printf("\ Seleccione la marca de moto que va a comprar\n");
	gets(marca);
	fflush(stdin);
	if(strcmp(marca,"Honda")==0){
		printf("\n Tiene un descuento de 5 porciento");
	}
	else if(strcmp(marca,"yamaha")==0){
		printf("\n Tiene un descuento de 8 porciento");
	}
		else{
		printf("\n Tiene un descuento de 10 porciento");
		
	}
	return 0;
}
