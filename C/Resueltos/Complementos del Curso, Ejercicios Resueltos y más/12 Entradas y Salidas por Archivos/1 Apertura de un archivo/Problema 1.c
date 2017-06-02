/*1. Utilizar la función fopen(), para determinar si existe un archivo de texto (.txt) 
o no.*/ 

/* fopen(nombre de archivo , modo);

	nombre de archivo = cadena  ... contiene el identificar externo del archivo
	modo = cadena               ... contiene el modo en que va a ser tratado el archivo
*/

#include<stdio.h>
#include<stdlib.h>

FILE *fd; 

int main(){
	char direccion[] = "D:\\prueba\\hola.txt";
	
	fd = fopen(direccion,"r"); //read -- leer
	
	if(fd == NULL){
		printf("No se localizo el archivo");
	}
	else{
		printf("Si se localizo el archivo");
		printf("\nUbicacion: %s",direccion);
	}
	
	
	return 0;
}
