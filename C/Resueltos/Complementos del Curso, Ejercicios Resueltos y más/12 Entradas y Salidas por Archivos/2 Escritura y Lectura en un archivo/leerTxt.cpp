#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main(){
	int c;
	
	char direccion[]  = "C:\\ruta\\agregarTexto.txt";
	
	fd = fopen( direccion, "rt");
	
	if(fd == NULL){
		printf("Error al crear el fichero de Texto");
		return 1;
	}
	
	
	// Introducir texto con getchar y fputc
	while( (c= fgetc(fd) )!= EOF){            // bucle hasta findenfichero
		if(    c == EOF) {
		printf(     "\n");            // Escribe un salto de linea
	}else{
		fputchar(c);
		
	}
}
	fclose(fd);
	
	return 0;
}
