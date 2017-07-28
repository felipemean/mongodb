#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main(){
	char direccion[] = "C:\\ruta\\hola mundo";
	
	
	fd = fopen(direccion, "w");   // w crear un archivo
	
	if( fd == NULL){
		printf("\n NO Se puede crear el archivo ");
	}else{
			printf("\n Se Creo el archivo");
				printf("\n Ubicacion del archivo:	%s ", direccion);
	}
	
	
	return 0;
	
}
