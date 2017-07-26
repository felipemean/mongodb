//p17  strlwr()
#include<stdio.h>
#include<string.h>

struct familiar{
	char nombre[20];
	char apellidos[20];
	
}familiares[3];
	


int main(){
	int i;
	
	for(i=0;i<3;i++){
			printf("%i.-\tDigita tu nombre en mayusculas   EN MAYUSCULAS:	\n\t", i+1);
			gets(familiares[i].nombre);
	
			printf("%i.-\tDigita tu apellidos en mayusculas   EN MAYUSCULAS:	\n\t", i+1);
			gets(familiares[i].apellidos);
	
	strlwr(familiares[i].nombre);
		strlwr(familiares[i].apellidos);
		
	}

		for(i=0;i<3;i++)	{
			printf("\n\t Datos del familiar numero %i:\t", i+1);
			printf("\n\t\t El nombre del familiar %i es :\t %s	\n", i+1,  familiares[i].nombre);
		
			printf("\n\t\t Los apellidos  del familiar %i son:\t  %s	\n", i+1 , familiares[i].apellidos);
	}
	
	return 0;
	
	
}
