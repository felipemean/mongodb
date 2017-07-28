#include<stdio.h>
#include<stdlib.h>

FILE *fd1, *fd2;

int main(){
	char direccion1[]= "C:\\ruta\\f1.txt";
		char direccion2[]= "C:\\ruta\\f2.txt";
	
	fd1 =fopen(direccion1, "a+");
	fd2 =fopen(direccion2, "a+");
	
	
if(fd1 == NULL || fd2 == NULL){
		printf(" No se han podido comprobar los archivos");
		
	}else{
		printf(" SI SE PUDO comprobar los archivos");
	}
	
	// Cerrar
	fclose(fd1);
	
	fclose(fd2);
	
	if(fd1 == NULL || fd2 == NULL){
		printf("\n No se han podido comprobar los archivos");
		
	}else{
		printf("\n SI SE PUDO comprobar los archivos");
	}
	
	
	return 0;
}
