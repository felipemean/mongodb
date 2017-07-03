// Ordenamiento por SELECCION
// buscamos el elemento minimo
//Buscamos el minimo del resto que queda.
#include<stdio.h>
#include<conio.h>

int main(){
	int a[5]={5,3,7,1,2};
	int i, j, aux, min;
	for(i=0;i<5;i++){
		min = i;
		for(j=i+1;j<5;j++){
			if(a[j] < a[min]){
				min = j;	
			}
 		}
		aux = a[i];
		a[i] = a[min];
		a[min] = aux;
	}
	
printf("\n imprimir en forma ASCENDENTE:\n\t");	
for(i=0;i<5;i++){
		printf("%i ", a[i]);
	}
	 printf("\n\n");
printf("\n  imprimir en forma descendente: \n\t");
	for(i=4;i>=0;i--){
		printf("%i ", a[i]);
	}
	getch();
	return 0;
}



