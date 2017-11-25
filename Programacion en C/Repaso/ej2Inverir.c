
// Invertir un numero con recursividad   789--> 987
#include<stdio.h>

int invertir(int n);

int main(){
	
	int numero;
	
	printf("Invertir un numero\n Introduce un numero entero de mas de 2 digitos\n");
	scanf("%i", &numero);
	
	invertir(numero);
	
	return 0;
}

int invertir(int n){
		printf("%i", n%10);
	if(n > 10) invertir(  n / 10);
	
	
	
}

