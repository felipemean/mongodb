//Directivas del preprocesador para librerias y Macros
//cabecea standard entrada salida datos
// librerias  #include<......h>
#include<stdio.h>
/*#include<string.h>         #include<math.h>           #include<stdlib.h> */
//Macros    #define una variable que cambia para usar en el programa
#define PI 3.1416
int y =5;  //variable global, se puede usar a lo largo de todo el programa
int main(){
	//variable local, se usa solo dentro de la funcion
	int x = 10; 
	float suma = 0;
	 suma = PI + x  ;
	printf("La suma es: %.2f", suma );
	return 0;
}

