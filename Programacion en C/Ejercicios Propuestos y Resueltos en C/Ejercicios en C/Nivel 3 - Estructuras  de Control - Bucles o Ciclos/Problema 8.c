/* 8. Hacer un arbol con '*' del tipo:
	ejemplo:
	
	Digite el numero de filas : 5
		
		*
		**
		***
		****
		*****
*/

#include<stdio.h>

int main(){
	int numfilas,i,j;
	
	printf("Digite el numero de filas: ");scanf("%i",&numfilas);
	
	for(i=0;i<numfilas;i++){
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}	
	
	return 0;
}
	
