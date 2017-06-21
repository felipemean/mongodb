//12 Serie fibonacci   1 1 2 3 5 8 13 21 34

#include<stdio.h>

int main(){
	int i, suma_pares=0, numero;
	printf("\n\tImprime la suma de numeros pares desde 1 hasta n,\n\tIntroduce el numero n:\t"); scanf("%i",  &numero);
	

	for(i=1;i<=numero;i++){
		if(i%2==0){ 
		suma_pares+=i;
		}
	}
	printf("\n\t%i ",suma_pares );
	return 0;
}
