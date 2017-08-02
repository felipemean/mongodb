/*4. Hacer un arreglo de estructura llamada atleta para N atletas que contenga 
los siguientes miembros: nombre, pais, numero_medallas. y devuelva los datos
(nombre, pais) del atleta que ha ganado el mayor numero de medallas.*/

#include<stdio.h>
#include<stdlib.h>

struct atleta{
	char nombre[20];
	char pais[20];
	int numero_medallas;
}atletas[100];

int main(){
	int i,n,mayor = 0,pos;
	
	printf("Digite el numero de atletas: ");
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("%i. Digite su nombre: ",i+1);
		gets(atletas[i].nombre);
		fflush(stdin);
		printf("%i. Digite su pais: ",i+1);
		gets(atletas[i].pais);
		printf("%i. Digite el numero de medallas: ",i+1);
		scanf("%i",&atletas[i].numero_medallas);
		printf("\n");
	}
	
	for(i=0;i<n;i++){
		if(atletas[i].numero_medallas > mayor){
			mayor = atletas[i].numero_medallas;
			pos = i;
		}
	}
	
	printf("\n--El atleta con mas medallas es: --\n");
	printf("\nNombre: %s",atletas[pos].nombre);
	printf("\nPais: %s\n\n",atletas[pos].pais);
	
	system("pause");
	return 0;
}

  
