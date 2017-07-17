/*13. Hacer un array de 10 numeros desordenados, luego ordenarlos con
el metodo burbuja, posteriormente pedir un dato a buscar y utilizar la
busqueda binaria para determinar si existe o no.*/

#include<stdio.h>
#include<conio.h>

int main(){
	int a[10] = {2,5,44,6,1,98,9,10,7,3};
	int i,j,aux;
	int dato,inf,sup,mitad;
	char band = 'F';
	
	//Metodo Burbuja
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(a[j]>a[j+1]){
				aux = a[j];
				a[j] = a[j+1];
				a[j+1] = aux;
			}
		}
	}
	
	for(i=0;i<10;i++){
		printf("%i ",a[i]);
	}
	getch();
	return 0;
}
