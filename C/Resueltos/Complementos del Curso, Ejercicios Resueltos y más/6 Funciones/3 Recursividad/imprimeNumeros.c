/* Recursividad: Una función recursiva es una función que se llama a 
si misma.
	1. Caso Base.
	2. Caso Recursivo.
*/

// Factorial

// -> 1 = 1    ... 1<n 1*2*3...n

#include<stdio.h>
int imprime(int n);

int main(){
	int numero, i;
	
	printf("\n\tDigite un numero: ");
	scanf("%i",&numero);
	
		printf("\n Lista los numeros del %i al 1 \n\t", numero,imprime(numero));
	for(i=numero;i>0;i--){
		printf("%i , ",imprime(i));
	}	
	return 0;
}

// 1 , 1 , 2 , 3 , 5, 8;  x=0; y=1; z = x + y; x=y; y=z; 
// Caso base z = x + y; puede ser 0 o 1
// caso recursivo(n)= fibonacci(n-1) + fibonacci(n-2);

int imprime(int n){
	if(  n == 1|| n == 0){
		return 1;
	}
	else{
		return imprime (n-1) + 1;
	}
}
