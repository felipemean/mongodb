/* 2. Crear un programa que tenga un array de 100 numeros aleatorios
entre 1 y 1000. Una vez creado organizarlo de tal manera que almacene
los numeros pares en un array y los impares en otro.*/

#include<stdio.h>
#define TAM 100


int main(){
	int i,numero[TAM],pares[TAM],impares[TAM];
	int n;
	
	srand(time(NULL));
	
	for(i=0;i<TAM;i++){
		numero[i] =rand()% + (1000 + 1);
	}
	
	printf("Pares:\n\n");
	for(i=0;i<TAM;i++){
		if(numero[i]%2==0){
			printf("%i.\n",numero[i]);
		}
	}
	
	printf("\nImpares:\n\n");
	for(i=0;i<TAM;i++){
		if(numero[i]%2==1){
			printf("%i.\n",numero[i]);
		}
	}	
	
	return 0;
}
