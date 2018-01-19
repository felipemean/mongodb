#include <stdio.h>
#include <stdlib.h>
// Ejemplo aprenderaprogramar.com
FILE *fd;
FILE *fichero;

int main() {

	char file[]= "cursoF1.txt";
  
	int c;
 
 fichero = fopen(  file, "at");
 fputs("\nAprender a programar (linea 1)\n", fichero);
 fputs("requiere esfuerzo (linea 2)\n", fichero);
 fputs("y dedicacion (linea 3)\n", fichero);
 fputs("y MI SUPER LINEA\n\n", fichero);
 fclose(fichero);
 printf("Proceso completado");
 
 // LEER lo escrito      ******************************************
 	
//	printf("\n Que archivo quieres leer:	\n"); gets(file);
	
fd = fopen(file, "rt");
	if( fd==NULL){
		printf("\n ERROR , no existe el fichero");
		
	}
	printf("\n\n");
	while( ( c= fgetc(fd))!= EOF){
		if( c == '\n'){
			printf("\n");
		}else{
			putchar(c);
		}
		
	}
	
	fclose(fd);
 
 return 0;
 } 
