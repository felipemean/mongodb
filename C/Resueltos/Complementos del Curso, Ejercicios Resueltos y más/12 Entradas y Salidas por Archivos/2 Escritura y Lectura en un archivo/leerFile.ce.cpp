//  fgetc()   leer todo su contenido

#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main(){
	
	int c;
	char direccion[] = "c:\\ruta\\felipeFile.txt";
	
	 fd  = fopen(direccion, "rt");
	 
	 if( fd == NULL){
	 	printf(" Hay un error al abrir el fichero");
	 	return 1;
	 }
	 while( (c = fgetc(fd)) != EOF){  // hay saltos de lineas
	 	if( c=='\n'){
	 		printf("\n");
	 	}
	 	else{
	 		putchar(c);
	 	}
	}
	
	fclose(fd);
	return 0;	
}
	
