// Leer contenido de un fichero y añadir texto
// Comprobar si existe unfichero
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
FILE *fd;
void accion1();
int main(){
	char direccion[]="C:\\ruta\\";
	char file[30];
	char accion[2];
	int c;
	printf("\n CREAR un archivo en el directorio: %s", direccion);
	printf("\n Teclea el nombre del archivo que buscas:	\n\t"); gets(file);
	strcpy(direccion+8,file);
	printf("\n El fichero que quieres crear es:	%s", direccion);
	fd = fopen(direccion,"wt");
	
	if(fd == NULL){
		printf("\n Error en la creacion del fichero %s", direccion);

	}else{
		printf("\n Fichero '%s' se ha creado correctamente", direccion);
	}
	
	printf("\n Empieza a añadir texto, Finaliza con CTRL+Z y enter\n\t");
	// Añadir texto con fputc (c, puntero_file);
	while( (c = getchar())!= EOF){
		fputc(c,fd);
		
	}
	fclose(fd);
	
	printf("\n Quieres añadir texto a un fichero existente?\t\t si/no\n\t"); gets(accion);
	if( strcmp(accion, "si") == 0){
		printf("Excelente");
		accion1();
	}else{
	printf("\n\n\t Bye Bye My Friend");
	}
	
	return 0;
}

void accion1(){
	int c;
	char file2[60];
	printf("\n Me alegro que quieras Jugar");
	printf("\n Teclea el fichero que quieres abrir para añadir texto:\n"); gets(file2);
	
/*
	fd = fopen(file2, "rt");
		if(fd==NULL){
		printf("ERROR");
	} 
	fclose(fd);
*/	
	printf("\n Empieza ha escribir texto en el fichero ");
	
	fd= fopen(file2,"a+");
	/*
	while((c = fgetc(fd))!=EOF){
		if(c=='\n'){
			printf("\n");
		}else{
			putchar(c);
		}
	}
	fclose(fd);
	*/
		while( (c = getchar())!= EOF){
		fputc(c,fd);
		
	}
	fclose(fd);
	
	printf("\n\t ASI QUEDA tu FICHERO POR FIN!!\n\n");
	fd= fopen(file2, "rt");
	while((c = fgetc(fd))!=EOF){
		if(c=='\n'){
			printf("\n");
		}else{
			putchar(c);
		}
	}
	fclose(fd);
	
}
