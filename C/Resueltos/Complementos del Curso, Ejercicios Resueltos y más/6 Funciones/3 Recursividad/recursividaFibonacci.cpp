/* Recursividad: Una función recursiva es una función que se llama a 
si misma.
	1. Caso Base.
	2. Caso Recursivo.
*/

// Factorial

// -> 1 = 1    ... 1<n 1*2*3...n

#include<stdio.h>
int fibonacci(int n);

int main(){
	int numero, i;
	
	printf("\n\tDigite un numero: ");
	scanf("%i",&numero);
	
		printf("\n La serie de fibonacci para el numero  %i es: %i\n\t", numero,fibonacci(numero));
	for(i=1;i<=numero;i++){
		printf("%i , ",fibonacci(i));
	}	
	return 0;
}

// 1 , 1 , 2 , 3 , 5, 8;  x=0; y=1; z = x + y; x=y; y=z; 
// Caso base z = x + y; puede ser 0 o 1
// caso recursivo(n)= fibonacci(n-1) + fibonacci(n-2);

int fibonacci(int n){
	if( n==0  || n == 1){
		return n;
	}
	else{
		return (fibonacci(n-1) + fibonacci(n-2));
	}
}
