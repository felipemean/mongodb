#include<stdio.h>
#include<stdlib.h>

FILE *fd1, *fd2;

int main(){
	char direccion1[]= "C:\\ruta\\f3.txt";
		char direccion2[]= "C:\\ruta\\f4.txt";
	
	fd1 =fopen(direccion1, "w");
	fd2 =fopen(direccion2, "w");
	
	
if(fd1 == NULL || fd2 == NULL){
		printf(" No se han podido crear los archivos");
		
	}else{
		printf(" SI SE PUDO crear los archivos");
	}
	
	// Cerrar
	fclose(fd1);
	
	fclose(fd2);
	
	if(fd1 == NULL || fd2 == NULL){
		printf("\n No se han podido cerrar los archivos");
		
	}else{
		printf("\n SI SE PUDO CERRAR los archivos");
	}
	
	
	return 0;
}
