#include<stdio.h>
#include<stdlib.h>

FILE *fd;


int main(){
	char file[100];
	int c;
	
	printf("\n Que archivo quieres leer:	\n"); gets(file);
	
	fd= fopen(file, "rt");
	if( fd==NULL){
		printf("\n ERROR , no existe el fichero");
		
	}
	
	while( ( c= fgetc(fd))!= EOF){
		if( c == '\n'){
			printf("\n");
		}else{
			putchar(c);
		}
		
	}
	
	fclose(fd);
	
	
	return 0;
}
