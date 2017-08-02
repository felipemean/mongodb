#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main(){
	int c;
	
	char direccion[]  = "C:\\ruta\\agregarTexto.txt";
	
	fd = fopen( direccion, "at");
	
	if(fd == NULL){
		printf("Error al crear el fichero de Texto");
		return 1;
	}
	
	
	// Introducir texto con getchar y fputc
	while( (c= getchar() )!= EOF){            // bucle hasta findenfichero
		fputc(c,fd);                      // Escribe caracter a caracter en el puntero
	}
	fclose(fd);
	
	return 0;
}
