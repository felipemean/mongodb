//Suna de los 10 primeros numeros pares
#include<stdio.h>
int main(){
	int nfilas,i,j,k; 
	printf("\n\tImprime un arbolito de n filas\n\tIntroduce numero de filas\n\t"); scanf("%i",&nfilas);
	for(i=0; i<nfilas;i++){
		for(k=0;k<=(nfilas-i);k++){
			printf(" ");
		}
		for(j=0;j<=(i*2);j++){
			printf("*");
		}
		printf("\n");
		}return 0;
	}
	

