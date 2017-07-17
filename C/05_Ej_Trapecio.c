//Areas de Trapecios
#include<stdio.h>

int main() {
	
	int baseM,basem,area,altura;
	printf("\nDigita la base mayor : \n");
	scanf("%i", &baseM);
	
		printf("\nDigita la base menor : \n");
	scanf("%i", &basem);
	
		printf("\nDigita la altura : \n");
	scanf("%i", &altura);
	
	area = ((baseM  + basem) * altura )/ 2;
	
	printf("\nEl area del trapecio es de  :   %i", area );
	
	return 0;
}
