#include<stdio.h>
int main(){
	int i, numero, suma=0, multiplo=1;
	printf("Digite un numero:\t"); scanf("%i", &numero);
	i=1;
	if(numero<=10) 	{
		while(i<=10){  	suma = suma + i; 		i++; 
	
		}
 				printf(" la suma es:\n\t  %i", suma);
		}else{
		while(i<=10){multiplo *= i;		i++;
		}	
		printf(" La multiplicacion de los 10 primeros numeros es es:\n\t  %i", multiplo);
		}
		
		
	return 0;
}
