#include<stdio.h>

	struct persona{
		char nombre[20];
		int edad;
		char sexo[20];
	}personas;
	
int main(){
	
	printf("\nTeclea nombre de la persona: "); scanf("%s", &personas.nombre);
		printf("\nTeclea su sexo( masculino/femenino): "); scanf("%s", &personas.sexo);
	printf("\nTeclea su edad: "); scanf("%i", &personas.edad);
	
	//printf("%s  ",personas.sexo);
	
	if( strcmp(personas.sexo,"masculino")==0 && personas.edad>=18 ){
		printf("%s  ",personas.nombre);
	}else{
		if ( personas.edad < 18 ){
				printf("Eres menor de edad");
		}else{
			if ( strcmp(personas.sexo,"masculino") != 0){
				printf(" No Eres del sexo masculino");
				if ( strcmp(personas.sexo,"femenino") == 0){
				printf("\n Eres del sexo FEMENINO");
			}
		}
		}
		if ( strcmp(personas.sexo,"femenino") == 0){
				printf("\n Eres del sexo FEMENINO");
		}
		printf("\n");
	}
	
	return 0;
}
