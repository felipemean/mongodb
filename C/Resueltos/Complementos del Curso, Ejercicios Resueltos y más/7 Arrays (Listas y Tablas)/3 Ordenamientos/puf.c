// 13. Array de 10 numeros , ordenanr con metodo burbuja
//pedir un dato a buscar con busqueda binaria
#include<stdio.h>
#include<conio.h>

int main(){
		fflush(stdin);
			fflush(stdout);
			int b[10] = {1,6,9,3,78,45,3,5,8,4};
	//int a[10] = {1,2,5,0,134,56,78,99,8,17};
	int i, j , aux;

	// metodo burbuja de ordenación
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(b[j]>b[j+i]){
				aux= b[j];
				b[j]=b[j+1];
				b[j+1]=b[j];
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%i ",b[i]);
	}
	printf("\n Teclea un numero, a ver si esta en el array");
	
	getch();
	return 0;
}
