#include<stdio.h>

FILE *fd;

int main(){
	char dir[] = "C:\\ruta\\oposicion.txt";
	int c;
	
	printf("\n Estidio de la Opsición Guia de Trabajo");
	
	fd = fopen(dir,"at");
	
	printf("\n Incluye los temas de la programacion");
	
	while( (c = getchar())!= EOF){
		fputc(c,fd);
		
	}
	fclose(fd);
	
}
