/*    fputc()    para introducir caracteres
													*/
#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main(){
	int c;
	char direccion[] = "C:\\ruta\\hola mundo.txt";
	
	fd = fopen(direccion, "wt");  // Escribir texto
	
	if( fd== NULL){
		printf(" ERROR al crear el archivo");
		return 1;
	}
	
	while(( c = getchar())!= EOF){
		fputc(c, fd);
	}
	
	fclose(fd);

	return 0;											
}
