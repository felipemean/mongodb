/*2. Crear un archivo de texto (.txt) en la ubicacion que elijas, posteriormente
crear un programa en C, que localize tu archivo de texto creado.*/

#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main(){
	char direccion[] = "Aqui pones la direccion";
	
	fd = fopen(direccion,"r"); //r = read -- leer
	
	if(fd == NULL){
		printf("No se detecto el archivo");
	}
	else{
		printf("Archivo localizado");
		printf("\nUbicacion: %s",direccion);
	}
	
	
	return 0;
}
