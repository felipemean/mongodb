/*8. Hacer una matriz de tipo entera de 2 * 2, llenarla de numeros
y luego copiar todo su contenido hacia otra matriz.*/

#include<stdio.h>
#include<conio.h>

int main(){
	int matriz1[2][2] = {{1,2},{3,4}};
	int matriz2[2][2],i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			matriz2[i][j] = matriz1[i][j];
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%i ",matriz2[i][j]);
		}
		printf("\n");
	}
	
	
	getch();
	return 0;
}

