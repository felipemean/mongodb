#include<stdio.h>
// raiz cuadrada de un numero
int main(){
	int n1;
	float raiz;
	puts("\nDigite un numero\n");
	scanf("%i", &n1);
	
	raiz = sqrt (n1);
	printf("\nLa raiz cuadrada de %i es %.2f", n1, raiz);
	
	
	
	
	return 0;
}
