#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main(){
	int c;
	
	char direccion[] = "C:\\ruta\\felipeFile.txt";
	
	
	fd = fopen(direccion, "wt");
	
	if( fd == NULL){
		printf("Error ");
		return 1;
	}
	
	while((c = getchar()) != EOF){
		fputc(c,fd);
	}
	
	fclose(fd);
	
	return 0;
}
