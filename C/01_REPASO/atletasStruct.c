#include<stdio.h>
#include<stdio.h>
#define TAM 100


struct direccion{
	char direccion[30];
	char ciudad[20];
	char provincia[20];
};

struct empleado{
	char nombre[30];
	struct direccion dir_empleado;
	double salario;
}empleados[TAM];

int main(){
	int num, i, medallas =0 ;
	printf("\n Teclea el numero de empleados que van a registrar:	\n"); scanf("%i", &num);
	
	for(i=0;i<num;i++){
		
		fflush(stdin);
		printf("\n%i. Nombre del Empelado:	", i+1); gets(empleados[i].nombre);
		printf("\n%i. Direccion:	", i+1); gets(empleados[i].dir_empleado.direccion);
		printf("\n%i. Ciudad:	", i+1); gets(empleados[i].dir_empleado.ciudad);
		printf("\n%i. Provincia:	", i+1); gets(empleados[i].dir_empleado.provincia);
		printf("\n%i. Salario:	", i+1); scanf("%lf", &empleados[i].salario);
		printf("\n");
	}
	for(i=0;i<num;i++) {
		printf("\n%i. Nombre del Empelado:	", i+1, empleados[i].nombre);
		printf("\n%i. Direccion:	", i+1, empleados[i].dir_empleado.direccion);
		printf("\n%i. Ciudad:	", i+1, empleados[i].dir_empleado.ciudad);
		printf("\n%i. Provincia:	", i+1, empleados[i].dir_empleado.provincia);
		printf("\n%i. Salario:	", i+1, empleados[i].salario);
		printf("\n");
		
	}
	
	
	
	system("pause");	
	return 0;
}
