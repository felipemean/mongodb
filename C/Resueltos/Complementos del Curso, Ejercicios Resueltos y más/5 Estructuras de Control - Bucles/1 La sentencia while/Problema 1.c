// 1. Suma de los n primeros números

#include<stdio.h>

int main(){
	int i, suma=0,n;
	
	printf("Digite la cantidad de numeros a sumar: ");
	scanf("%i",&n);
	
	i = 1; 
	
	while(i<=n){
		suma = suma + i;
		i++;
	}
	printf("La suma es: %i",suma);
	
	
	return 0;
}


