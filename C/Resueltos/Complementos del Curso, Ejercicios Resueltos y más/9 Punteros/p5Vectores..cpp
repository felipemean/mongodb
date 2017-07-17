// vector de 10 elementos ,, int ==>  4 bytes de memoria reservada
#include<stdio.h>


int main(){
	int i, n[] = {1,2,3,4,4,7,8,9,5,4} ;  // vector
	int *p_n;
	
	p_n = n;  //  p_n = n[0] ;  Apunta al primer dato que encuentre en mi vector
	
	for(i=0;i<10;i++){
		printf("Dato de la posicion  n[%i]: 	%i", i , *p_n);  // el asterisco * implica el contenido del puntero;
		printf("\nPosicion:			%p", p_n);
		printf("\n\n");
		p_n++;
	}
	return 0;
}
