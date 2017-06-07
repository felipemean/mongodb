// suma n primeros numeros
#include<stdio.h>

int main(){
	int cont, n, suma = 0;
	
	printf("Digite el total de numeros a sumar:  "); scanf("%i",&n);
	
	cont = 1;
	
	while(cont<= n){
	//	suma = suma + cont ;
		suma += cont;
		cont ++;
		
	}

	printf("\n\tLa Suma vale:  %i", suma);	
	return 0;
}
