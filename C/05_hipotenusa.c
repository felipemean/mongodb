//Calculo de hipotenusa

#include<stdio.h>
#include<math.h>
int main (){
	//hipotenusa = raizcuadrada de la suma de los cuadrado de los catetos
	float hipotenusa,cateto1,cateto2;
	printf("\nTeclea 2 numeros :  cateto1 y cateto2 \n");
	scanf("%f %f",&cateto1,&cateto2);

	 
	hipotenusa= sqrt( pow(cateto1,2)+pow(cateto2,2));
	
	printf("La hipotenusa de un triangulo rectangulo de catetos %.2f y  %.3f es : %.2f", cateto1,cateto2,hipotenusa);
		
	return 0;
}
