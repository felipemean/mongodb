/* compra con el 15% de descuento
*/
#include<stdio.h>

int  main(){
	
	float  precio = 100;
	float porcentaje = 0.15;
	float descuento = 0;
	float total, t0 ;
	float p1,p2,p3;
	float d1,d2,d3;
	float t1,t2,t3;
	// pedimos cadesna   STRINGS s, y no se usa &
	char x[50];
	char y[50];
	
	descuento = porcentaje * precio;
	t0 = precio - descuento ;

	printf("Quieres añadir un producto a la lista de la compra\n Escribe si  o no:\n");
		scanf("%s", x);
			printf("Introduce precio:\n");
				scanf("%f", &p1);
					d1= p1 * porcentaje;
					t1 = p1-d1;
			
		printf("Quieres añadir un producto a la lista de la compra\n Escribe si o no:\n");
		scanf("%s", y);
		printf("Introduce precio:\n");
			scanf("%f", &p2);
			d2= p2 * porcentaje;
			t2= p2 - d2;
			total =  t0 + t1 + t2 ;
	printf("Precio total a pagar : %.2f", total);
	return 0;
}
