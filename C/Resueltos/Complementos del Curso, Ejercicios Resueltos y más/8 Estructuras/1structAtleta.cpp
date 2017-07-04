// Arreglo de estructura: atletas : nombre, pais, numero_medallas
//Devuelve datos del atleta que ha ganado mayor numero de medallas

#include<stdio.h>
#include<stdlib.h>

struct aleta{
	char nombre[20];
	char pais[20];
	int numero_medallas;
} atletas[100];

int main(){
	int i,n,mayor,mnmedallas;
	printf("\n\t Introduce el numero de atletas:	"); scanf("%i",&n);

	for(i=0;i<n;i++){
		fflush(stdin);
		printf("\n\t%i Introduce Nombre:	", i+1); gets(atletas[i].nombre);
		printf("\n\t%i Introduce pais:	", i+1); gets(atletas[i].pais);
		printf("\n\t%i Introduce numero de medallas:	", i+1); scanf("%i",&atletas[i].numero_medallas);
	}
	mayor=0;
	for(i=0;i<n;i++){
		if(atletas[i].numero_medallas > mayor){
			mayor= atletas[i].numero_medallas;
			mnmedallas = i;
		}
	}
	printf("\n\n");
	printf("\n\t%i El atleta que ha ganado mayor numero de medallas es:	", mnmedallas+1);
		printf("\n\t%i  Nombre:	%s", mnmedallas+1, atletas[mnmedallas].nombre);
			printf("\n\t%i  Pais:	%s", mnmedallas+1, atletas[mnmedallas].pais);
			printf("\n\t%i  numero de medallas:	%i", mnmedallas+1, atletas[mnmedallas].numero_medallas);
			
	return 0;
}
