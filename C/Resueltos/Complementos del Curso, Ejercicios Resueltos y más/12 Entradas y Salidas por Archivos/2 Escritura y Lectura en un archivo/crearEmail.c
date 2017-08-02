#include<stdio.h>
#include<stdlib.h>

FILE *fd;

struct datosPersonales{
	char nombre[20];
	char apellidos[20];
	char email[30];
}datos;

int main(){
	char direccion[] = "C:\\ruta\\email.txt";
	char rpt;
	
	fd = fopen(direccion, "wt");
	
	if(fd == NULL){
		printf("Error al crear el archivo");
		return 1;
	}
	
	printf("\t.:Agenda de Email:.");
	fprintf(fd, ".:Agenda de Email:.");
	
	do{
		fflush(stdin);
		printf("\nNombre: "); gets(datos.nombre);
		printf("Apellidos: "); gets(datos.apellidos);
		printf("Email: "); gets(datos.email);
		
		fprintf( fd, "\nn\Nombre: ");
		fwrite(datos.nombre,1,strlen(datos.nombre), fd);
		fprintf( fd, "\nApellidos: ");
		fwrite(datos.apellidos,1,strlen(datos.apellidos), fd);
		fprintf( fd, "\nEmail: ");
		fwrite(datos.email,1,strlen(datos.email), fd);
		
		printf("Desea agregar mas contactos (s): ");
		scanf("%c", &rpt);
		
	}while( rpt == 's');
	
	fclose(fd);
	
	return 0;
}
