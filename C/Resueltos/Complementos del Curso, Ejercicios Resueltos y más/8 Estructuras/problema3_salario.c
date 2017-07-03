#include<stdio.h>
#include<stdlib.h>

struct empleado{
	char nombre[20];
	char sexo[20];
	float salario;	
}empleados[100];  // supongo un máximo  de  100 empleados;


int main(){
	int n, i, pmay, pmen;
	float mayor= 0.0, menor =99999999999;
	printf("\n\t Cuantos empleados hay en la empresa:	"); scanf("%i", &n);
	
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("\n\t%i. Teclea el Nombre:	", i+1); gets(empleados[i].nombre);
			printf("\n\t%i. Teclea el Sexo:	", i+1); gets(empleados[i].sexo);
				printf("\n\t%i. Teclea el Salario:	", i+1); scanf("%f", &empleados[i].salario);
		printf("\n\n");
	}
	/* e1= 120	
		e2= 150
			e3 = 300
	*/
	for(i=0;i<n;i++){
		if(empleados[i].salario > mayor){
			mayor =empleados[i].salario;
			pmay = i ;
		}
		if(empleados[i].salario < mayor){
			menor =empleados[i].salario;
			pmen = i ;
		}
	}
	printf("\n\n");
	printf("\n\t Datos del empleado con mayor salario- \n"); 
	printf("\n\t%i.  Nombre:	%s", pmay+1, empleados[pmay].nombre);
			printf("\n\t%i.	Sexo:	%s", pmay+1 ,empleados[pmay].sexo);
				printf("\n\t%i.  Salario:	%.2f", pmay+1, empleados[pmay].salario);
		printf("\n\n");
	
	
	printf("\n\t Datos del empleado con menor salario- \n"); 
	printf("\n\t%i.  Nombre:	%s", pmen+1, empleados[pmen].nombre);
			printf("\n\t%i.	Sexo:	%s", pmen+1, empleados[pmen].sexo);
				printf("\n\t%i.  Salario:	%.2f", pmen+1, empleados[pmen].salario);
		printf("\n\n");
	
	
	system("pause");
	return 0;
}
