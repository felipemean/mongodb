// existe un archivo,,, usar fopoen
// Detectar si un fichero esta creado o no

#include<stdio.h>
#include<stdlib.h>

FILE *fd;  // es un puntero a archivo

int main(){
	char direccion[] = "C:\\ruta\\Boston City Flow.jpg";
	fd = fopen(direccion,"r") ; //direccion del archivo y orden read (r)
	
	
	if( fd == NULL){
		
		printf(" \n\t El Fichero no exite");
	}else{
		printf(" \n\t SE encontro el archivo");
			printf(" \n\t Ubicacion del archivo:	%s", direccion);
	}
	
	
	
	return 0;
}
