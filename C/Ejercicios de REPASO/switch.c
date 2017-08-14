// Condicionales multiples  sentecias SWITCH
#include<stdio.h>

int main(){
	int numero;
	
	printf("\n\tIntroduce un numero entre 1 y 3    \n\t      0 \n        4 para salir:	\n\n\t");
	scanf("%i",  &numero);
	
	do{

	switch(numero){
		case 1: printf("\n\nHAS ELEGIDO el UNO"); break;
			case 2: printf("\n\nHAS ELEGIDO el DOS");  break;
				case 3: printf("\n\nHAS ELEGIDO el TRES"); break;
				case 4: 	break;
		default:  printf("\n\n NO HAS ELEGIDO el NUEMRO CORRECTO");
	}
	if( numero != 4){
			printf("\n\n\tIntroduce un numero entre 1 y 3 y 4 para salir:	");
	scanf("%i",  &numero);
	}
	


}
		while( numero != 4);
		
		printf("\n\n Has elegido el numero 4 y por eso FINALIZA el programa");
		puts("\n\t Hasta pronto");
		return 0;
}
