#include<stdio.h>
int main(){
	int numero;
	printf("\n\tDigite un numero cualquiera y \n\tveremos sin es par o impar:\n\n\t"); scanf("%i",&numero);
	
	(numero % 2 == 0) ? printf("\n\tEl numero %i es par\n", numero) : printf("\n\tEl numero %i es impar\n", numero) ;
	
	return 0;
}
