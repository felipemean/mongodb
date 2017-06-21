#include<stdio.h>
int main(){
	int i, numero, factorial=1;
	
	printf("\nIntroduce un Numero y te calculo el factorial n * (n-1) * (n-2)....:\t"); scanf("%i", &numero);
	
	for(i=numero;i>=1;i--){
		//factorial = factorial*i;
		factorial *=i;
	}
	printf("\nFactorial de %i es %i", numero, factorial);
	return 0;
}
