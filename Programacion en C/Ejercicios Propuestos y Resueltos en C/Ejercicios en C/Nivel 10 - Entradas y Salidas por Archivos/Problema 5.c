/*5. Abrir 2 archivos de texto (.txt), despues cerrar cada uno de ellos con fclose().*/

#include<stdio.h>
#include<stdlib.h>

FILE *fd1,*fd2;

int main(){
	
	fd1 = fopen("D:\\prueba\\archivo1.txt","a+");
	fd2 = fopen("D:\\prueba\\archivo2.txt","a+");
	
	if(fd1 == NULL || fd2 ==NULL){
		printf("Error al tratar de modificar el archivo");
	} 
	else{
		printf("Se pudo modificar los archivos");
	}
	
	//Cerramos los archivos con la función fclose()
	
	fclose(fd1);
	fclose(fd2);
	
	return 0;
}
