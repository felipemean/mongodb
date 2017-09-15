/*6. Hacer un programa que muestre una tabla de multiplicar hasta el 20 de un número 
cualquiera por pantalla, el número se pedirá en el programa principal. Usar procedimiento */

#include<stdio.h>
void tabla(int n);

int main(){
	int numero;
	
	printf("Digite un numero: ");
	scanf("%i",&numero);
	
	tabla(numero);
	
	
	return 0;
}

void tabla(int n){
	int i;
	for(i=1;i<=20;i++){
		printf("\n%i * %i = %i",n,i,n*i);
	}
}
