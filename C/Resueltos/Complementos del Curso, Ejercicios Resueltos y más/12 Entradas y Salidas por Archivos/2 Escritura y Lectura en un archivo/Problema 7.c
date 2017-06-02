/*7. Utilizar la función fputc() para introducir caracteres en un archivo de 
texto (.txt).

   fputc(c,puntero_archivo);
*/ 


#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main(){
	int c;
	char direccion[] = "D:\\prueba\\hola.txt";
	
	fd = fopen(direccion,"wt"); //wt = write text -- escribir texto
	
	if(fd == NULL){
		printf("Error al tratar de crear el archivo");
		return 1;
	}

	while((c=getchar())!= EOF){
		fputc(c,fd);
	}
	
	fclose(fd);	
	return 0;
}
