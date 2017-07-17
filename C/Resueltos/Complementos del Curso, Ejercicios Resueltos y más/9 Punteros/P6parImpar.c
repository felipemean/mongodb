#include<stdio.h>

int main(){
	int i, n[10] ;
	int *p_n;
	p_n = n;  //  p_n = n[0] ;  Apunta al primer dato que encuentre en mi vector
	
	printf("\n\n Rellena un array de 10 numeros enteros:	\n");
	for(i=0;i<10;i++){
		fflush(stdin);
		printf("\n%i. teclea numero:	",i+1); scanf("%i", &n[i]);
	}
	for(i=0;i<10;i++){
		printf("Dato de la posicion  n[%i]: 	%i", i , *p_n);  // el asterisco * implica el contenido del puntero;
		printf("\nPosicion:			%p", p_n);
		printf("\n\n");
		p_n++;
	}
		p_n=n;
	for(i=0;i<10;i++){ //Comprobar números pares
		if(*p_n%2==0){
			printf("\nNumero par: %i",*p_n);
			printf("\nPosicion: %p",p_n);
			printf("\n");
		}
		p_n++;
	}
	
	return 0;
}
