// Pide opinicion
#include<stdio.h>


void funcion_aleatoria();
	
int main(){
	char decision[60];
	printf("\n Si quieres finalizar el programa escribe 'fin' ");
	
	while(strcmp(decision,"fin")!=0){
			printf("\n Introduce la que quieres decidir:	\n");
	gets(decision);
	if(strcmp(decision,"fin")==0){
		break;
	}
	printf("\n %s:", decision);
	
	
	funcion_aleatoria();
	}  

	
	
	return 0;
}


void funcion_aleatoria(){
	int numero;					// para almacenar el numero generado aleatoriamente
	
	srand(time(NULL));			// Genera numeros alatorios
	
	numero = 1 + rand() % ((10+1)-1);  // 	numero = Mimite Inf + rand() % ((LIMITE SUP +1)- Mimite Inf );
	if(numero%2==0){
		printf("\t Adelante, buena decision");
	}else{
			printf("\t El programa no te lo recomienda");
	}

	
}
