/*5. Calcular el mayor de dos números leídos del teclado y visualizarlo en pantalla.*/

#include<stdio.h>

int main(){
	int n1,n2;
	
	printf("Digite 2 numeros: ");
	scanf("%i %i",&n1,&n2);
	
	if(n1 > n2)
		printf("\nEl mayor es: %i",n1);
	
	else
		printf("\nEl mayor es: %i",n2);
	
	
	
	return 0;
}
