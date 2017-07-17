#include<stdio.h>
int main(){
	int cont, n , suma=0;
	printf("Digite el total de numeros a sumar:\n"); scanf("%i", &n);
	
	cont=1;
	
	while(cont<=n){
		suma += cont;
		cont++;
		
	}
	printf("\n\tLa suma es %i\n", suma);
	
	return 0;
}
