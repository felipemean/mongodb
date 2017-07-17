// PROCDIMIENTOS   void   NO RETORNA ningun valor;
#include<stdio.h>
	
void media(a,b);
	
	int main(){
		int a,b;
		printf("\n\tDigita 2 numero2:\t"); scanf("%i %i", &a, &b);
		comprobar(a,b);
		
	return 0;
	}
	

	
	void comprobar(int a, int b){ 
		float media;
	 	media = (a + b)/2;
	 	printf("\n\tLa medida aritmetica de %i y %i es \t%.2f\n", a, b, media);
	}
	
