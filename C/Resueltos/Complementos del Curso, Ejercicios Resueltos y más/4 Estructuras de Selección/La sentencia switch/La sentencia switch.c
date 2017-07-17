/* Sentencia switch() 

switch (selector){

case etiqueta1 : sentencias1;break;
case etiqueta2 : sentencias2;break;
case etiqueta3 : sentencias3;break;
default: sentencias;

}*/

// Ejemplo del numero

#include<stdio.h>

int main(){
	int numero;
	
	printf("Digite un numero: ");
	scanf("%i",&numero);
	
	switch(numero){
		case 1: 
		case 2: printf("Menores a 3");break;
		case 3: printf("Numero 3");
		default:printf("Mayor a 3");break;		
	}
	
	return 0;
}




