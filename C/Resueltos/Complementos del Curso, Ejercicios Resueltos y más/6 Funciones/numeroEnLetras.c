#include<stdio.h>

void menu();

int main(){
	menu();
	
	return 0;
}


void menu(){
	int opc;
	
	do{
			printf("\n\n1. Escribe un numero del 1 al 10:\t");
			printf("\n\n   Escribe '0' para salir\t");
			 scanf("%i", &opc);
				printf("\n\t");
				switch(opc){
					
					case 1: printf("UNO");break;
					case 2: printf("DOS");break;
					case 3: printf("TRES");break;
					case 4: printf("CUATRO");break;
					case 5: printf("CINCO");break;
					case 6: printf("SEIS");break;
					case 7: printf("SIETE");break;
					case 8: printf("OCHO");break;
					case 9: printf("NUEVE");break;
					case 10: printf("DIEZ");break;
					
				}
				
	}while(opc!=0);
	
}

