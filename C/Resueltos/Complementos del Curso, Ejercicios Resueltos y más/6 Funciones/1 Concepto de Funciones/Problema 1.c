//1. Determinar si un numero es par o no.

#include<stdio.h>
void comprobar(int n);

int main(){
	int numero,x;
	
	printf("Digite un numero: ");
	scanf("%i",&numero);
	
	comprobar(numero);
	
	
	return 0;
}

void comprobar(int n){
	if(n%2==0){
		printf("\n El numero es par");
	}
	else{
		printf("\n El numero es impar");
	}
	
}
