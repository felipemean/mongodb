// Guardar numeros de celular(nombre, apellidos, email)
// menu Crear, Agrear mas contactos y Visualizar
#include<stdio.h>
#include<stdlib.h>

struct datosPersonales{
	char nombre[30];
	char apellidos[30];
	char celular[30];
}datos;

FILE *fd;

void crear(){
	printf("\n Test opc: Crear...............\n\tCreando fichero con numero de celular");
	char dir[]= "C:\\ruta\\agenda.txt";
	char rpt;
	fd = fopen(dir, "wt");
	
	if( fd == NULL){
		printf("\n Error creando el fichero de agenda telefonos mobiles");
		return 1;
	}
		printf("\n Fichero Creado ...........Incluyecdo datos......");
		printf("\n Teclea por orden Nombre Apellidos y E-amil");
		fprintf(fd,"\t	*****    DIRECTORIO    *******  \n");
		
		do{
		fflush(stdin);
		printf("\nNombre: ");gets(datos.nombre);
		printf("Apellidos: ");gets(datos.apellidos);
		printf("Celular: ");gets(datos.celular);
		
		fprintf(fd,"\n\nNombre: ");
		fwrite(datos.nombre,1,strlen(datos.nombre),fd);
		fprintf(fd,"\nApellidos: ");
		fwrite(datos.apellidos,1,strlen(datos.apellidos),fd);
		fprintf(fd,"\nCelular: ");
		fwrite(datos.celular,1,strlen(datos.celular),fd);
		printf("Desea agregar mas contactos(s): ");
		scanf("%c",&rpt);
	}while(rpt == 's');
	fclose(fd);
}

void agregar(){
	printf("\n Test opc: Agregar Mas numeros:	\n");
	char dir[]= "C:\\ruta\\agenda.txt";
	char rpt;
	fd = fopen(dir, "at");
	do{
		fflush(stdin);
		printf("\nNombre: ");gets(datos.nombre);
		printf("Apellidos: ");gets(datos.apellidos);
		printf("Celular: ");gets(datos.celular);
		
		fprintf(fd,"\n\nNombre: ");
		fwrite(datos.nombre,1,strlen(datos.nombre),fd);
		fprintf(fd,"\nApellidos: ");
		fwrite(datos.apellidos,1,strlen(datos.apellidos),fd);
		fprintf(fd,"\nCelular: ");
		fwrite(datos.celular,1,strlen(datos.celular),fd);
		printf("Desea agregar mas contactos(s): ");
		scanf("%c",&rpt);
	}while(rpt == 's');
	fclose(fd);
}
	
void visualizar(){
	int c;
	char dir[]= "C:\\ruta\\agenda.txt";
	printf("\n Test opc: Visualizar\n");
	fd = fopen(dir, "r");
	printf(" VER tEXTO del fichero");
	while( (c = fgetc(fd))!= EOF){
		if(c == '\n'){
			printf("\n");
	}else{
		putchar(c);
	}
}
}

int main(){
	int opc;
	do{
		
	printf("\n\t 	MENU:\n");
	printf("\n\t 1.- Crear(nombre, apellidos, email).");
	printf("\n\t 2.- Agregar Contactos (nombre, apellidos, email).");
	printf("\n\t 3.- Visualizar contactos existentes.");
	printf("\n\t 4.- Salir del Menu.");
	
	printf("\n\t Teclea una opcion de 1 a 4:\n\t"); scanf("%i", &opc);
	
	switch(opc){
			case 1: crear(); break;
			case 2: agregar(); break;
			case 3: visualizar(); break;
			case 4: break;
			default: printf("\n\t Solo son validas las opciones del 1 al 4 ");
		}
	}while( opc != 4);
	fclose(fd);
	printf("\n\t FIN, Has salido del programa, Bye Bye");
	
	return 0;
}
	
	

