// 4. Determinar si un número es par, impar 

#include<stdio.h>

int main(){
	int numero;
	
	printf("Escriba un numero: ");
	scanf("%i",&numero);
	
	if(numero%2==0){
		puts("El numero es par");
	}
	if(numero%2==1){
		puts("El numero es impar");
	}
	
	
	return 0;
}
