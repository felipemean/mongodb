//metodo Ordenar por Insercion , bueno para muchos numeros-
#include<stdio.h>
#include<conio.h>

int main(){
	int a[5]={4,5,1,2,3};
	
	int i, pos, aux;
	
	for(i=0;i<5;i++){
		pos = i;
		aux = a[i];
		while((pos>0) && (aux < a[pos-1])){
			a[pos] = a[pos-1];
			pos--;
		}
		a[pos] = aux;
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
