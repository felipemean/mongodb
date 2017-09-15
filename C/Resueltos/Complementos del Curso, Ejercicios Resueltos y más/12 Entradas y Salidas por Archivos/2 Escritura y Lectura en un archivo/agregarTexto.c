//  fgetc()   leer todo su contenido

#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main(){
	
	int c;
	char direccion[] = "c:\\ruta\\felipeFile.txt";
	
	 fd  = fopen(direccion, "at");
	 
	 if( fd == NULL){
	 	printf(" Hay un error al abrir el fichero");
	 	return 1;
	 }
	 while( (c = getchar()) != EOF){  // hay saltos de lineas
	 	  fputc(c,fd);
	 	}
	
	fclose(fd);
	return 0;	
}
	
