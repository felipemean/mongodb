/* REcursividad ,,,,  la funcion se llama a si misma
	1. Caso Base
	2.- Caso Recursivo
	
		a(x){
	if(n=1){
	return n;
	}
		else {
		 		a(x-j);
		 }
}                                                            */
// Factorial de u numero
#include<stdio.h>
long suma(int n);

int main(){
	int numero;
	
	printf("\\tTeclea un  numero:\t"); scanf("%i", &numero);
	printf("\n\tLa suma desde 1 hasta el numero %i es: \t%li", numero, suma(numero));
	
	return 0;
}

long suma(int n){
	//caso base   (1! = 1)           4! = 4 * 3* 2* 1 = 4 * 3!; 3!= 3 * 2!; 2! = 2 *1!
	if(n<=1){
		return 1;
	}
	else{
	return (n+suma(n-1));		
	}
}
