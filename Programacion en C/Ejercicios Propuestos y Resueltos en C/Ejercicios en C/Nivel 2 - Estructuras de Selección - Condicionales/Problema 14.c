/*14. Mostrar los meses del año, pidiendole al usuario un numero entre (1-12)
y mostrar el mes al que corresponde*/

#include<stdio.h>

int main(){
	int mes;
	
	printf("Digite un numero entre (1-12): ");scanf("%i",&mes);
	
	switch(mes){
		case 1: printf("Enero");break;
		case 2:printf("Febrero");break;
		case 3:printf("Marzo");break;
		case 4:printf("Abril");break;
		case 5:printf("Mayo");break;
		case 6:printf("Junio");break;
		case 7:printf("Julio");break;
		case 8:printf("Agosto");break;
		case 9:printf("Septiembre");break;
		case 10:printf("Octubre");break;
		case 11:printf("Noviembre");break;
		case 12:printf("Diciembre");break;	
		default: printf("Numero no valido para mes");	
	}
	
	
	return 0;
}
