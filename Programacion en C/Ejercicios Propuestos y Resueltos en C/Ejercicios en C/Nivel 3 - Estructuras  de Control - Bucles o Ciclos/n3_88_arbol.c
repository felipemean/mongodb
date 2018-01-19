#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int filas , i, j,k;
	system("color 4E");
	printf("\n Hacer un arbol:   \n Teclea el numero de filas:	") ; scanf(" %i", &filas);

	
	for(i=0;i<=(filas-1);i++){
		for(j=0;j<filas-i;j++){
			
			printf("%i",j);
		}for(k=0;k<=i*2;k++){
		
			printf("*");
	}
	printf("\n");
	}
	
	

	
	return 0;
}
