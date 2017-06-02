//4. Invertir un numero entero con Recursividad.

#include<stdio.h>
void invertir(int n);

int main(){
	int numero;
	
	
	do{
		printf("Digite un numero: ");
		scanf("%i",&numero);
	}while(numero<0);
	
	invertir(numero);
	return 0;
}

void invertir(int n){
	printf("%i",n%10);
	if(n>10) invertir(n/10);
}
