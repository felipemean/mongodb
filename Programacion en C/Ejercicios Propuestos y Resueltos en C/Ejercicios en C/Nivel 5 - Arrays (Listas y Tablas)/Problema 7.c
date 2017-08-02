/*7. Hacer una matrices de tipo entera preguntandole al usuario el 
numero de filas y el numero de columnas, rellenar la matriz y luego 
mostrarla en pantalla*/

#include<stdio.h>
#include<conio.h>

int main(){
	int tabla[50][50],filas,columnas,i,j;
	
	printf("Digite el numero de filas: ");
	scanf("%i",&filas);
	printf("Digite el numero de columnas: ");
	scanf("%i",&columnas);
	
	printf("\n\n");
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("Digite tabla[%i][%i]: ",i+1,j+1);
			scanf("%i",&tabla[i][j]);
		}
	}
	
	printf("\n\n");
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("%i ",tabla[i][j]);
		}
		printf("\n");
	}
	
	
	getch();
	return 0;
}
