// Leer contenido de un fichero y añadir texto
// Comprobar si existe unfichero
#include<stdio.h>
FILE *fd;

int main(){
	char direccion[]="C:\\ruta\\";
	char file[30];
	printf("\n Buscar un archivo en el directorio: %s", direccion);
	printf("\n Teclea el nombre del archivo que buscas:	\n\t"); gets(file);
	strcpy(direccion+8,file);
	printf("\n El fichero que quieres crear es:	%s", direccion);
	fd = fopen(direccion,"w");
	
	if(fd == NULL){
		printf("\n Error en la creacion del fichero %s", direccion);
	}else{
		printf("\n Fichero '%s' se ha creado correctamente", direccion);
	}
	
	
	return 0;
}
