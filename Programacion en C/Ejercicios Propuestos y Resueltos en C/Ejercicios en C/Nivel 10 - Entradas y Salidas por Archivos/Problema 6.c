/*6. Hacer un programa en C, que cree 2 archivos de texto (.txt), y luego utilizar
la función fclose() para cerrarlos.*/

#include<stdio.h>
#include<stdlib.h>

FILE *fd1,*fd2;

int main(){
	
	fd1 = fopen("D:\\prueba\\archivo1.txt","wt");
	fd2 = fopen("D:\\prueba\\archivo2.txt","wt");
	
	if(fd1==NULL || fd2==NULL){
		printf("No se pudo crear los archivos");
	}
	else{
		printf("Exito al crear los archivos");
	}
	
	//utilizamos la funcion fclose() para cerrar los archivos
	fclose(fd1);
	fclose(fd2);
	
	return 0;
}
