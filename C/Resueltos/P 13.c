// 13. Array de 10 numeros , ordenanr con metodo burbuja
//pedir un dato a buscar con busqueda binaria
#include<stdio.h>
#include<conio.h>

int main(){
// Metodo de la burbuja
	int a[7] = {4,7,9,35,1,5,2};
	int i, j, aux;
	int dato, inf,sup,mitad;
	char band= 'F' ;
	
	for(i=0;i<7;i++){
		for(j=0;j<7;j++){
			if(a[j] > a[j+1]){
				aux = a[j];
				a[j] = a[j+1];
				a[j+1] = aux;
			}
		}
	}
	for(i=0;i<7;i++){
		printf("%i , ", a[i]);
	}
	printf("\n\t Teclea un numero:\t"); scanf("%i", &dato);
	
//Busqueda Binaria
	inf=0, sup=7;
	
	while(inf<=sup){
		mitad = (inf+sup)/2;
		if(a[mitad]==dato){
			band = 'V';
			break;
		}
		if(a[mitad]>dato){
			sup = mitad;
			mitad = (inf+sup)/2;
		}
		if(a[mitad]<dato){
			inf = mitad;
			mitad = (inf+sup)/2;
		}
	}
	
	if(band=='F'){
		printf("\n\tEl dato no existe");
	}	
	else if(band == 'V'){
		printf("\n\tEl dato existe, en la pos: %i",mitad);
	}
	
	
	
}
