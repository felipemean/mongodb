#include<stdio.h>
#include<stdlib.h>  //necesario para malloc

int main(){
	int *a;  // variable puntero y le reservo tamaño de memoria
	
	a = malloc(sizeof(int)); // tamaño de una variable entera.  Ya esta reservado.
	// comprobar el tamaño
	int x;
	x= sizeof(int);
	printf("\n %i",x);  //compruebo el tamaño en bytes en mi maquina
	
	int y;
	y= sizeof(char);
	printf("\n %i",y);  //compruebo el tamaño en bytes en mi maquina
	
	int z;
	z= sizeof(float);
	printf("\n %i",z);  //compruebo el tamaño en bytes en mi maquina
	
	return 0;
}
