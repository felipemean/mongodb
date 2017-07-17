//p 8.  Matriz entera 2*2 llenarla de numeros copiarla a otra matriz
#include<stdio.h>
#include<conio.h>
int main(){
	int matriz1[2][2], matriz2[2][2], i, j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n\t Teclea el numero de la matriz[%i][%i]:",i+1,j+1); scanf("%i", &matriz1[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			matriz2[i][j] = matriz1[i][j];
		}
	}



	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%i  ", matriz2[i][j]);
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
