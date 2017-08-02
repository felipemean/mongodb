/*14. Hacer un array de 10 numeros desordenados, luego ordenarlos con
el ordenamiento por seleccion, posteriormente pedir un dato a buscar 
y utilizar la busqueda binaria para determinar si existe o no.*/

#include<stdio.h>
#include<conio.h>

int main(){
	int a[10] = {2,5,4,6,1,8,9,10,7,3};
	int i,j,min,temp;
	int dato,inf,sup,mitad;
	char band = 'F';
	
	for(i=0;i<10;i++){
		min = i;
		for(j=i+1;j<=10;j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
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
