#include<stdio.h>
#include<conio.h>

void sumo(int a[50][50], int b[50][50],int filas, int columnas);
//void rellenar(int a[2][2], int b[2][2]);

int main(){
	int filas, columnas, i, j;
	int array1[50][50], array2[50][50];
	
//	int suma[2][2];

	printf("\n Teclea el numero de filas:\t"); scanf("%i", &filas);
	printf("\n Teclea el numero de columnas:\t"); scanf("%i", &columnas);
	printf("\n");
		for(i=0;i<filas;i++){
			for(j=0;j<columnas;j++){
				printf("\n Teclea el numero array1[%i][%i]", i+1, j+1);scanf("%i", &array1[i][j]);
			}
		}
	printf("\n\n");
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){	
			printf("\n Teclea el numero array2[%i][%i]", i+1, j+1);scanf("%i", &array2[i][j]);
			}
		}
	printf("\n\n");
	
	printf("\n SUMA: \n");
	
	sumo(array1, array2,filas,columnas);

	getch();
	return 0;
}

void sumo(int a[50][50], int b[50][50], int filas, int columnas){
	int i, j;
	int suma[filas][columnas];
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			suma[i][j] = a[i][j] + b[i][j];		
		}
	}
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("%i ",	suma[i][j] );		
		}
		printf("\n");
	}
	
}

