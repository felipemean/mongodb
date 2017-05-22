//Tipos de datos en C
#include<stdio.h>
int main(){
	char a='e';  //tamaño = 1 byte Rango ; 0...255
	short b= -128 ; //tamaño = 2 bytes Rango : -128....127
	int c= -32768; //tamaño = 2 bytes Rango : -32768....32767
	unsigned int d= 65535 ; //tamaño = 2 bytes Rango : 0....65535
	long e= -2147483648 ; //tamaño = 4 bytes Rango : 0....6553
	float f = 10.366666;  //tamaño = 4 bytes
	double m =123456.12345; // tamaño = 8 bytes
	printf("El elemento caracter es :  %c\n", a);
	
	printf("El elemento short es :  %i\n", b);
		printf("El elemento entero es :  %i\n", c);
		printf("El elemento unsigned int es :  %i\n", d);
	printf("El elemento long int es :  %li\n", e);
		printf("El elemento long int es :  %.2f\n", f);
			printf("El elemento long int es :  %lf\n", m);


	
	return 0;
}
