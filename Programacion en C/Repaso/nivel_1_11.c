#include<stdio.h>

int main(){
	
	int hora, sg, min, suma= 0;
	
	printf("\nTeclea las horas:	"); scanf("%i", &hora) ;
	
		printf("\nTeclea los minutos:	"); scanf("%i", &min) ;
				printf("\nTeclea los segundos:	"); scanf("%i", &sg) ;
				
	suma= hora * 60 *60 + min *60 + sg ;	
				
		printf("\nEl total de segundos es:	%i"); scanf("%i", suma) ;


	
	return 0;
}
