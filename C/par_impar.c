#include<stdio.h>
int main(){
	int numero;
	printf("\tDigita un numero:\n");
	scanf("%i", &numero);
	
	( numero % 2 == 0 ) ? printf("El nuemro es PAR") :  printf("El nuemro es IMPAR");
	
	return 0;
    }
