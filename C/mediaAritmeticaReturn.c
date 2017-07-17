// PROCDIMIENTOS   void   NO RETORNA ningun valor;
#include<stdio.h>
	
float media( float a, float b);
	
	int main(){
		float a,b,x;
		printf("\n\tDigita 2 numero2:\t"); scanf("%f %f", &a, &b);
		x= media(a,b);
		printf("\n\tLa medida aritmetica de %.2f y %.2f es \t%.2f\n", a, b, x);
		return 0;
	}
	

	
	float media(float a, float b){ 
	 
		float media;
	 	media = (a + b)/2;
	 	return media;
	}
	
