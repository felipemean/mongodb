#include<stdio.h>
#include<stdlib.h>  //necesario para malloc

int main(){
	int *a;  // variable puntero y le reservo tama�o de memoria
	
	a = malloc(sizeof(int)); // tama�o de una variable entera.  Ya esta reservado.
	// comprobar el tama�o
	int x;
	x= sizeof(int);
	printf("\n %i",x);  //compruebo el tama�o en bytes en mi maquina
	
	int y;
	y= sizeof(char);
	printf("\n %i",y);  //compruebo el tama�o en bytes en mi maquina
	
	int z;
	z= sizeof(float);
	printf("\n %i",z);  //compruebo el tama�o en bytes en mi maquina
	
	return 0;
}
