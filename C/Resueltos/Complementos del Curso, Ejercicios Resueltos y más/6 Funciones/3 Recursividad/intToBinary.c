//pasar un numero entero a binario
#include<stdio.h>
void binary(int n);
int main(){
	int numero;
	do{
			printf("\n\t Teclea un numero entero:\t"); scanf("%i", &numero);
	printf("\n\t El numero entero %i en BINARIO es:\n\t", numero);
	}
	while(numero<0);
	binary(numero);
	return 0;
}

void binary(int n){
	if(n>1) binary(n/2);
	
	printf("%i", n%2);
	}
	

