/*14. Crear un programa en C, que pueda seguir agregando contactos de email, hacia el 
archivo que creamos en el problema 13.*/

#include<stdio.h>
#include<stdlib.h>

FILE *fd;

struct datosPersona{
	char nombre[20];
	char apellidos[20];
	char email[30];
}datos;


int main(){
	char direccion[] = "D:\\prueba\\emails.txt";
	char rpt;
	fd = fopen(direccion,"at"); //at = add texto - agregar texto;
	
	if(fd == NULL){
		printf("Error al tratar de localizar el archivo");
		return 1;
	}
	
	printf("\t.:Agregando mas Contacto de Email:.\n");
	
	do{
		fflush(stdin);
		printf("\nNombre: ");gets(datos.nombre);
		printf("Apellidos: ");gets(datos.apellidos);
		printf("Email: "); gets(datos.email);
		
		fprintf(fd,"\n\nNombre: ");
		fwrite(datos.nombre,1,strlen(datos.nombre),fd);
		fprintf(fd,"\nApellidos: ");
		fwrite(datos.apellidos,1,strlen(datos.apellidos),fd);
		fprintf(fd,"\nEmail: ");
		fwrite(datos.email,1,strlen(datos.email),fd);
		printf("Desea seguir agregando mas contantos(s):  ");
		scanf("%c",&rpt);
	}while(rpt == 's');
	
	fclose(fd);
	return 0;
}
