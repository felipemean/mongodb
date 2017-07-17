#include<stdio.h>
// switch        case etiqutea: sentencia; breaK 
//					default: sentncia;

int main (){
	int numero;
	printf("Digite un numero (1-3): \n");
	scanf("%i", &numero);
	switch(numero){
		
		case 1: printf("Es el numero uno"); break;
		case 2: printf("Es el numero dos");break;
		case 3: printf("Es el numero tres");break;
		default: printf("No a escrito un numero correcto");
	}
	
	return 0;
}
