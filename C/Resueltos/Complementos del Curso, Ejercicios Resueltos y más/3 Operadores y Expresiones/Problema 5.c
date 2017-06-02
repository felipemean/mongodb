/*5. Hacer un Programa que calcule áreas de trapecios*/

#include<stdio.h>

int main(){
	int base_M,base_m,altura;
	float area;
	
	printf("Digite la base mayor: ");
	scanf("%i",&base_M);
	printf("Digite la base menor: ");
	scanf("%i",&base_m);
	printf("Digite la altura: ");
	scanf("%i",&altura);
	
	area = ((base_M+base_m)*altura)/2;
	
	printf("\nEl area es: %f",area);
	
	return 0;
}
