//invertir un numero entero con recursividad
#include<stdio.h>
void invertir(int n);
int main(){
	int numero, otro;
	printf("\n\t Teclea un numero entero para invertir su orden\n\t"); scanf("%i", &otro);
	invertir(otro);
	do{
	
	printf("\n\t Teclea un numero entero para invertir su orden\n\t"); scanf("%i", &numero);
	} while(numero<0);
	invertir(numero);	
	return 0;
}

void invertir(int n){

	printf("%i",n%10);
	if(n>10) invertir(n/10);
}
