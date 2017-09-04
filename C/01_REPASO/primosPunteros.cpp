//Imprimir el alfabero en Mayusculas con punteros

#include<stdio.h>


int main(){
	int numero, i , count= 0;
	int *p_numero ;  // Posicion de letra
	
	printf("\n Teclea un numero:	"); scanf("%i", &numero);
	
	p_numero = &numero;
	for(i=1;i<=*p_numero;i++){
			if( *p_numero%i == 0){
			count =count +1;
			}
	}
	
	if( count== 2) {
			printf("\n El numero %i es primo", numero);	
					printf("\n El numero %i esta almacenado en la posicion de memoria:\n\t	%p ", numero, p_numero);	
	}	
return 0;
}
