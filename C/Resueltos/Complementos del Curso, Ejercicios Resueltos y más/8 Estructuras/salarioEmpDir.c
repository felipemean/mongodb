//Estructuras anidadas en C
#include<stdio.h>
#include<stdlib.h>

struct info_general{
	char direccion[30];
	char ciudad[20];
	char provincia[20];
};

struct empleado{
	char nombre[30];
	struct info_general dir_empleado;
	double salario;
}empleados[2];

int main(){
	int i;
	
	for(i=0;i<2;i++){
		fflush(stdin);
		printf("%i. 	Teclea tu nombre:	", i+1); gets(empleados[i].nombre);
			printf("%i. 	Teclea tu direccion:	", i+1); 
				gets(empleados[i].dir_empleado.direccion);	
			printf("%i. 	Teclea tu Ciudad:	", i+1);
				gets(empleados[i].dir_empleado.ciudad);	
			printf("%i. 	Teclea tu provincia:	", i+1); 
				gets(empleados[i].dir_empleado.provincia);	
		printf("%i. 	Teclea tu salario:	", i+1); scanf("%lf",&empleados[i].salario);
		printf("\n\n");
	}
	
	for(i=0;i<2;i++){
				printf("\n\n Datos del empleado numero %i", i+1);
				printf("\n Nombre:	%s", empleados[i].nombre);
				printf("\n Direccion:	%s", empleados[i].dir_empleado.direccion);
					printf("\n Provincia:	%s", empleados[i].dir_empleado.provincia);
						printf("\n Ciudad:	%s", empleados[i].dir_empleado.ciudad);
			printf("\n Salario:	%lf", empleados[i].salario);
			printf("\n\n");
	}
			
	system("pause");
	return 0;
}
