/*2. Comprobar si un número es par o impar, y señalar la posicion de memoria donde
se está guardando el número. Con punteros.*/

#include<stdio.h>

int main(){
	int numero, *p_numero;
	
	printf("Digite un numero: "); //Pedimos el número al usuario
	scanf("%i",&numero);
	
	p_numero = &numero;  //guardamos la posicion de memoria del número
	
	if(*p_numero%2==0){ //Comprobamos si es par
		printf("El numero %i es par",*p_numero);
		printf("\nPosicion: %p",p_numero); //Imprimimos su posición en memoria
	}
	else{
		printf("El numero %i es impar",*p_numero);
		printf("\nPosicion: %p",p_numero);	
	}
	
	
	
	
	return 0;
}
