/*13. Hacer un array de 10 numeros desordenados, luego ordenarlos con
el metodo burbuja, posteriormente pedir un dato a buscar y utilizar la
busqueda binaria para determinar si existe o no.*/

#include<stdio.h>
#include<conio.h>

int main(){
	int a[10] = {2,5,4,6,1,8,9,10,7,3};
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
	
	printf("\nDigite un numero: ");
	scanf("%i",&dato);
	//Busqueda Binaria
	inf = 0;
	sup = 10;
	
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
		printf("El dato no existe");
	}	
	else if(band == 'V'){
		printf("El dato existe, en la pos: %i",mitad);
	}
	
	
	
	getch();
	return 0;
}
