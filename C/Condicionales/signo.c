#include<stdio.h>
int main(){
	char nombre[30], signo[20]; int edad;
	
	puts("\n Digite su nombre: \n");
	gets(nombre);
	
	puts("\n Digite su edad: \n");
	scanf("%i", &edad);
	fflush(stdin);
	puts("\n Digite su signo: \n");
	gets(signo);
	
	if(strcmp(signo, "aries") == 0){
		printf("\n   Es signo Aries,  su nombre es:  %s y tiene %i años", nombre, edad);
	}else{
		printf("\n   No  es signo Aries");
	}
	
	
	
	return 0;
}
