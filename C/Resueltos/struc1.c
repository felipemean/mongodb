#include<stdio.h>


struct persona{
	char nombre[20]; //miembro
	int edad;
} persona1 = { "Felipe",53}, persona2 = { "Maria",25};
	
int main(){
	
	printf("\n\t Su nombre es: 	%s  y la edad es:	%i", persona1.nombre,persona1.edad);
	
		printf("\n\t Su nombre es: 	%s  y la edad es:	%i", persona2.nombre,persona2.edad);
	
	return 0;
} 
