/*10. Sumar 2 matrices, pidiendo al usuario el numero de filas y
columnas y ademas los elementos de cada matriz, luego mostrar el 
resultado.*/

#include<stdio.h>
#include<conio.h>
void sumar(int a[50][50],int b[50][50],int filas,int columnas);

int main(){
	int matriz1[50][50],matriz2[50][50];
	int filas,columnas,i,j;
	
	printf("Digite el numero de filas de la matriz: ");
	scanf("%i",&filas);
	printf("Digite el numero de columnas de la matriz: ");
	scanf("%i",&columnas);
	printf("\n");
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("Digite el numero matriz1[%i][%i]: ",i+1,j+1);
			scanf("%i",&matriz1[i][j]);
		}
	}

	printf("\n\n");
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("Digite el numero matriz2[%i][%i]: ",i+1,j+1);
			scanf("%i",&matriz2[i][j]);
		}
	}
	
	printf("\nSuma: \n");
	sumar(matriz1,matriz2,filas,columnas);
	
	
	getch();
	return 0;
}

void sumar(int a[50][50],int b[50][50],int filas,int columnas){
	int suma[filas][columnas],i,j;
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			suma[i][j] = a[i][j] + b[i][j]; 
		}
	}
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("%i ",suma[i][j]);
		}
		printf("\n");
	}
	
}

