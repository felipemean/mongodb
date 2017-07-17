/*12. Crear un archivo de texto, ponerle el texto que deseas, y luego crear un 
programa en C para agregarle mas texto al archivo.*/

#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main(){
	int c;
	char direccion[] = "D:\\prueba\\nuevo archivo.txt";
	
	fd = fopen(direccion,"at");
	
	if(fd == NULL){
		printf("Error al tratar de abrir el archivo");
	}
	
	while((c=getchar()) != EOF){
		fputc(c,fd);
	}
	
	
	return 0;
}
