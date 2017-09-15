//9. Hacer un Programa que borre la pantalla al pulsar 1.

#include<stdio.h>
#include<stdlib.h>

int main(){
	int letra;
	
	printf("!!!!!Programa que borra la pantalla al pulsar 1!!!!!!");
	printf("\n---------------------------------------------------\n");
	printf("Por favor, digite el numero 1: ");
	scanf("%i",&letra);
	
	if(letra==1){
		system("cls");
		printf("Ha funcionado el borrado de pantalla");
	}
	else{
		printf("\nTecla equivocada, tienes que pulsar 1: ");
		scanf("%i",&letra);
		if(letra==1){
		system("cls");
		printf("Ha funcionado el borrado de pantalla");
		}
	}

	return 0;	
}
