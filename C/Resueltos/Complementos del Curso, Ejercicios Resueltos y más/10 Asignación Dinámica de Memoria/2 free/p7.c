//p 7  Reservar mem dinamica para nombre de 10 espacion, luego ampliar a 30 espacions
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char *p_nombre, *p_nombre2 , *p_nombre3;
	
	p_nombre = malloc(sizeof(char)*10);
	
	strcpy(p_nombre, "Alejandro");
	
	printf("\n\tNombre es:  %s",p_nombre);
	
	p_nombre2 = realloc(p_nombre, 30 * (sizeof(char)));
	
	//strcpy(p_nombre2, "Alejandro del bollo largo");
		strcat(p_nombre2, " Miguel Taboada");			// agregar mas 
	
	printf("\n\tNombre Completo es:  %s",p_nombre2);
	
		p_nombre3 = realloc(p_nombre, 50 * (sizeof(char)));
		
			strcat(p_nombre3, " Bien Vive");			// agregar mas 
	
	printf("\n\tNombre Completo es:  %s",p_nombre3);
	
	free(p_nombre3);
	return 0;
}
