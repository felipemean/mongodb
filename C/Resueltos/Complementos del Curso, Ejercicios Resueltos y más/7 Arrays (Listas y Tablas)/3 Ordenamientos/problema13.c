// 13. Array de 10 numeros , ordenanr con metodo burbuja
//pedir un dato a buscar con busqueda binaria
#include<stdio.h>
#include<conio.h>

int main(){
	int a[10]= {3,6,1,2,7,8,4,9,10,5};
	int i, j , aux;
	// metodo burbuja de ordenación
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(a[j]>a[j+i]){
				aux= a[j];
				a[j]=a[j+1];
				a[j+1]=a[j];
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%i ",a[i]);
	}
	printf("\n Teclea un numero, a ver si esta en el array");
	
	getch();
	return 0;
}
