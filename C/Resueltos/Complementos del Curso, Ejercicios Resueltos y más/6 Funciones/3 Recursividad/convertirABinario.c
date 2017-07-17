//pasar un numero binario a entero y al reves
#include<stdio.h>
void binario(int n);
int main(){
	int numero;
	do {
		printf("Teclea un  numero:  \t"); scanf("%i", &numero);
	}
	while (numero<0);
	
	binario(numero);
	
	return 0;
}

void binario(int n){
	if(n>1) binario(n/2);
	
	printf("%i", n%2);
	
	}
