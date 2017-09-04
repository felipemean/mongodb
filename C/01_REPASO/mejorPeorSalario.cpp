// Arreglos de estructuras
#include<stdio.h>
#include<stdlib.h>
#define TAM 10
struct empleado{
	char nombre[30];
	char sexo[10] ;
	int salario;
}empleados[TAM];


int main(){
	int i, num, max =0, min=9999999 , pMax, pMin ;
	printf("\n Teclea el numero de empleados de la empresa:	"); scanf("%i", &num);
 
 	// Introduce datos de los empleados
	for(i=0;i<num;i++){
		fflush(stdin);  // vaciar el buffer
		printf("\n%i. Teclea nombre del empleado %i:\t", i+1,i+1);
		gets(empleados[i].nombre);
	printf("\n%i. Teclea el sexo del empleado %i:\t", i+1,i+1);
		gets(empleados[i].sexo);
			printf("\n%i. Teclea el salario del empleado %i:\t", i+1,i+1);
			scanf("%i", &empleados[i].salario);
		printf("\n");
	}	
	// imprime lista de empleados
	printf("\n********Lista de empleados **************");
	for(i=0;i<num;i++){
		printf("\n%i. Nombre: %s y ",i+1, empleados[i].nombre);
		 	printf(" sexo: %i  y Salario: %i", empleados[i].sexo, empleados[i].salario);
		printf("\n");
	}
		// imprime datos del empleado con mejor salario

/*   Metodo largo a lo basto
if( empleados[0].salario > empleados[1].salario){
		if( empleados[0].salario > empleados[2].salario){ 
		   printf("\n Nombre:  %s  , sexo: %i , salario: %i",empleados[0].nombre, empleados[0].sexo, empleados[0].salario );
	}else {
		    printf("\n  Nombre:  %s  , sexo: %i , salario: %i",empleados[2].nombre, empleados[2].sexo, empleados[2].salario );
	}
}else {
		if( empleados[1].salario > empleados[2].salario){ 
		    printf("\n  Nombre:  %s  , sexo: %i , salario: %i", empleados[1].nombre, empleados[1].sexo, empleados[1].salario );
	}else { 
	        printf("\n   Nombre:  %s  , sexo: %i , salario: %i",empleados[2].nombre, empleados[2].sexo, empleados[2].salario);
	}
}
*/
// metodo fino
for(i=0;i<num;i++){
	if(empleados[i].salario > max){
		max = empleados[i].salario;
		pMax = i;
	}
}

for(i=0;i<num;i++){
	if(empleados[i].salario < min){
		min = empleados[i].salario;
		pMin = i;
	}
}
printf("\n\n******** El empleado con mejor salario es: %s \n **************",empleados[pMax].nombre );
printf("\n ***********     El mejor salario es:	%i     *****************+", max);
 printf("\n   Nombre:  %s  , sexo: %s , salario: %i",empleados[pMax].nombre, empleados[pMax].sexo, empleados[pMax].salario);

printf("\n\n******** El empleado con peor salario es: %s \n **************",empleados[pMin].nombre );
printf("\n ***********     El mejor salario es:	%i     *****************+", min);
 printf("\n   Nombre:  %s  , sexo: %s , salario: %i",empleados[pMin].nombre, empleados[pMin].sexo, empleados[pMin].salario);
	
return 0;
}
