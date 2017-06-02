/* 2. Comprobar si un numero digitado por el usuario es positivo o negativo*/

#include<stdio.h>

int main(){
	int numero;
	
	printf("Digite un numero: "); scanf("%i",&numero);
	
	if(numero > 0){
		puts("El numero es positivo");
	}
	if(numero<0){
		puts("El numero es negativo");
	}
	
	
	return 0;
}
