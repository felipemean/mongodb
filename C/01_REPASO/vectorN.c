#include<stdio.h>


int main(){
	int n[] = {1, 2, 3, 4, 4, 7, 8, 9, 5, 4};
	int *p_n, i;
	
	p_n= n;   //  es una variable puntero  p_n = n[0];
	
	for (i= 0 ;i<10; i++)  {
		printf("\nDato n[%i]: %i   ", i, *p_n);  // imprimir los valores del vertor
			printf("\nPosicion:  %pi", i, p_n);  // imprimir las posiciones del vertor
				printf("\n");
				p_n++;
	}
	
	
	return 0;
}
