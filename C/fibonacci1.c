//12 Serie fibonacci   1 1 2 3 5 8 13 21 34

#include<stdio.h>

int main(){
	int i, x=0, y=1, z=1, numero;
	printf("\n\tImprime la serie de fibonacci de n numeros,\n\tIntroduce el numero n:\t"); scanf("%i",  &numero);
		printf("\n\tLa serie de fibonacci de %i numeros es:\n\t",numero);
	printf("0 , 1 , ");
	for(i=1;i<(numero-1);i++){
		z=x+y;
		x=y;
		y=z;
		printf("%i , ",z );
	}
	
	return 0;
}
