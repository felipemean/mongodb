#include<stdio.h>
#include<string.h>


struct usuario{
	char nombre[20];
	char apellido[20];
	char	ciudad[40];
	
} usuarios[100];

int main(){

	
	printf("\n\t Teclea tu nombre , apellido y ciudad:	\n");
	gets(usuarios[1].nombre);
	gets(usuarios[1].apellido);
	gets(usuarios[1].ciudad);
	
	strupr(usuarios[1].nombre);
		strupr(usuarios[1].apellido);
			strupr(usuarios[1].ciudad);	
	printf("\n\t Tu nombre:  %s  \n\t apellido:  %s \n\t y ciudad:  %s ", usuarios[1].nombre, usuarios[1].apellido , usuarios[1].ciudad );
	
		
	
	return 0;
}
