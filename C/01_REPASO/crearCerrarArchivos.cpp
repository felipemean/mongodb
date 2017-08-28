#include<stdio.h>
#include<stdlib.h>
#include<string.h>

FILE *fd1, *fd2;


int main(){
	
	char direccion1[] = "C:\\ruta\\f1.txt";
	char direccion2[] = "C:\\ruta\\f2.txt";
	char file1[40], file2[40];
	
		printf("\n Crear 2 Archivos: ");
		printf("\n teclea el nombre del primer archivo:		\n"); gets(file1);
			printf("\n teclea el nombre del segundo archivo:		\n"); gets(file2);
		
		strcpy(direccion1+8,file1);
			strcpy(direccion2+8,file2);
		printf("\n la direccion completa del fichero es:	%s", direccion1);
			printf("\n la direccion completa del fichero es:	%s", direccion2);
			
	
		fd1 = fopen(direccion1,"w");
		fd2 = fopen(direccion2,"w");
	
		if(fd1== NULL || fd2 == NULL){ 
			printf("No se han podido comprobar los archivos");
		}
		else {
				printf("\n\nSI se han podido comprobar los archivos");
	}
		fclose(fd1);
		fclose(fd2);
	
	
	return 0;
}
