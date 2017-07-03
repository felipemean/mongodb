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
long factorial(int n);

int main(){
	int numero;
	
	printf("\\tTeclea un  numero:\t"); scanf("%i", &numero);
	printf("\n\tEl factorial del numero es: \t%li",factorial(numero));
	
	return 0;
}

long factorial(int n){
	//caso base   (1! = 1)           4! = 4 * 3* 2* 1 = 4 * 3!; 3!= 3 * 2!; 2! = 2 *1!
	if(n<=1){
		return 1;
	}
	else{
	return (n*factorial(n-1));		
	}
}
