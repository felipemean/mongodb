/* Recursividad: Una función recursiva es una función que se llama a 
si misma.
	1. Caso Base.
	2. Caso Recursivo.
*/

// Factorial

// -> 1 = 1    ... 1<n 1*2*3...n

#include<stdio.h>
long factorial(int n);


int main(){
	int numero;
	
	printf("Digite un numero: ");
	scanf("%i",&numero);
	
	
	printf("\n El factorial del numero es: %li",factorial(numero));
	
	return 0;
}

// 4! = 4 * 3 * 2 * 1

long factorial(int n){
	if(n<=1){
		return 1;
	}
	else{
		return (n * factorial(n-1));
	}
}
