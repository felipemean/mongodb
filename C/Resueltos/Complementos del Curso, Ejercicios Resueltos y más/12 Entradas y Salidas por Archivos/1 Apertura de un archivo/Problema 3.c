/*3. Hacer un programa en C que cree un archivo de texto (.txt).*/

#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main(){
	char direccion[] = "D:\\prueba\\alejandro.txt";
	
	fd = fopen(direccion,"w"); //w = write -- escribir -- crear
	
	if(fd==NULL){
		printf("No se encontro el lugar para crear el archivo");
	}
	else{
		printf("Archivo creado");
		printf("\nUbicacion: %s",direccion);
	}
	
	
	return 0;
}
