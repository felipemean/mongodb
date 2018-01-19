#include<stdio.h>
#include<stdlib.h>

struct address{
	char calle[30];
	char ciudad[20];
	char provincia[20];	
};

struct empleado{
	char nombre[20];
	struct address dir_empleado;
	double salario;
}empleados[100];


int main(){
	
	int cuantos=2, i;
	
		system("color 4F");
	printf("\n Toma de Datos: \n========================\n\n");
	
	
	for(i=1;i<=cuantos;i++){
		fflush(stdin);
		printf("%i.- Digite su nombre:	", i); gets(empleados[i].nombre);
			printf("\t%i.- Digite su direccion, calle:	", i); gets(empleados[i].dir_empleado.calle);
			printf("\t%i.- Digite su direccion, ciudad:	", i); gets(empleados[i].dir_empleado.ciudad);
			printf("\t%i.- Digite su direccion, provincia:	", i); gets(empleados[i].dir_empleado.provincia);
		printf("%i.- Digite su salario:	", i); scanf("%lf", &empleados[i].salario);	
		printf("\n\n");
	}
	system("pause");
	system("color 2F");
	system("cls");
	printf("\n Datos Registrados: \n========================\n");
	
	for(i=1;i<=cuantos;i++){
		printf("%i.- Nombre:	%s\n", i, empleados[i].nombre);
			printf("\t%i.- Direccion,     calle:	%s\n", i, empleados[i].dir_empleado.calle);
			printf("\t%i.- Direccion,    ciudad:	%s\n", i, empleados[i].dir_empleado.ciudad);
			printf("\t%i.- Direccion, provincia:( %s )\n", i, empleados[i].dir_empleado.provincia);
		printf("%i.- Salario:	%.2lf\n", i, empleados[i].salario);	
		printf("\n\n");
	}
	 
	
	system("pause");
	return 0;
}
