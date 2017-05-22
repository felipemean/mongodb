//entradas y salidas de datos
#include<stdio.h>
int main(){
	int suma = 10;
	//agrupar datos en un printf
	int a = 10;
	float b= 15.5;
	char c= 'T';

	// pedimos cadesna   STRINGS s, y no se usa &

	printf("Digita el valor de la variable c: ");
	scanf("%c",&c);
	printf("Digita el valor de la variable a: ");
	scanf("%i",&a);
	printf("Digita el valor de la variable b: ");
	scanf("%f",&b);
	// Vamos a intoducir cadenas de caracteres con char x[n];
	
	printf("La suma es : %i\n", suma);
	printf("%i\n %.2f\n %c\n", a,b,c);
	
	return 0;
}
