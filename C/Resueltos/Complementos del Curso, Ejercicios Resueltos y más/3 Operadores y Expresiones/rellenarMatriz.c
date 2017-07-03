// hacer una matriz entera preguntando el numero de filas y columnas y mostrarla en pantalla
#include<stdio.h>
#include<conio.h>

int main(){
	int matriz[50][50], filas, columnas, i, j;
 
	printf("Teclee nuemro de filas y columnas:\t"); scanf("%i %i", &filas, &columnas);
	
	printf("\n\n");
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("\n Teclea el numero elemento de la  matriz[%i][%i]", i+1,j+1);
			scanf("%i", &matriz[i][j]);
		}
		printf("\n\n");
	}
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("%i ,", matriz[i][j]);
		}
		printf("\n\n");
	}
	
	getch();
	return 0;
}
