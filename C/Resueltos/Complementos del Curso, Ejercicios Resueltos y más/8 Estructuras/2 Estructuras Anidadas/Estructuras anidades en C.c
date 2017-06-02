#include<stdio.h>
#include<stdlib.h>

struct info_direccion{
	char direccion[30];
	char ciudad[20];
	char provincia[20];
};

struct empleado{
	char nombre[20];
	struct info_direccion dir_empleado;
	double salario;	
}empleados[2];

int main(){
	int i;
	
	for(i=0;i<2;i++){
		fflush(stdin);
		printf("%i. Digite su nombre: ",i+1);
		gets(empleados[i].nombre);
		printf("%i. Digite su direccion: ",i+1);
		gets(empleados[i].dir_empleado.direccion);
		printf("%i. Digite su ciudad: ",i+1);
		gets(empleados[i].dir_empleado.ciudad);
		printf("%i. Digite su provincia: ",i+1);
		gets(empleados[i].dir_empleado.provincia);
		printf("%i. Digite su salario: ",i+1);
		scanf("%lf",&empleados[i].salario);
		printf("\n");
	}	
	printf("\n");
	for(i=0;i<2;i++){
		printf("\n\nDatos del empleado n° %i:",i+1);
		printf("\nNombre: %s",empleados[i].nombre);
		printf("\nDireccion: %s",empleados[i].dir_empleado.direccion);
		printf("\nCiudad: %s",empleados[i].dir_empleado.ciudad);
		printf("\nProvincia: %s",empleados[i].dir_empleado.provincia);
		printf("\nSalario: %.2lf\n",empleados[i].salario);
	}
	
	system("pause");
	return 0;
}
