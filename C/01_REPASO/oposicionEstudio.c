#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main(){
	char dir[] = "C:\\ruta\\oposicion.txt";
	int c;
	
	printf("\n Estudio de la Opsición Guia de Trabajo");
	
	fd = fopen(dir,"rt");
	
	printf("\n Leyendo filchero oposicion.txt\n");
	
	if( fd==NULL){
		printf("\n ERROR , no existe el fichero");
		
	}
	
	while( ( c= fgetc(fd))!= EOF){
		if( c == '\n'){
			printf("\n");
		}else{
			putchar(c);
		}
		
	}
	
	fclose(fd);
	
}
