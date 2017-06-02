/*13. Crear un archivo de texto (.txt), donde guardar los email de amigos.

	fprintf(puntero,informacion);
	fwrite(dato a guardar, tamaño, longitud, puntero);
*/

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
	fd = fopen(direccion,"wt");
	
	if(fd == NULL){
		printf("Error al tratar de crear el archivo");
		return 1;
	}
	
	printf("\t.:EMAIL DE AMIGOS:."); 
	fprintf(fd,"\t.:EMAIL DE AMIGOS:.");
	
	do{
		fflush(stdin);	
		printf("\nNombre: "); gets(datos.nombre);
		printf("Apellidos: "); gets(datos.apellidos);
		printf("Email: "); gets(datos.email);
	
		fprintf(fd,"\n\nNombre: "); 
		fwrite(datos.nombre,1,strlen(datos.nombre),fd);
		fprintf(fd,"\nApellidos: ");
		fwrite(datos.apellidos,1,strlen(datos.apellidos),fd);
		fprintf(fd,"\nEmail: ");
		fwrite(datos.email,1,strlen(datos.email),fd);
		printf("Desea guardar mas datos(s) : ");
		scanf("%c",&rpt);
	}while(rpt == 's');

	
	
	fclose(fd);	
	return 0;
}
