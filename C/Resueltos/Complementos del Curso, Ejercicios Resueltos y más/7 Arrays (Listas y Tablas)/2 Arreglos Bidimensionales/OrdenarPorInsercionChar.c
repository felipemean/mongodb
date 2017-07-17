//metodo Ordenar por Insercion , bueno para muchos numeros-
#include<stdio.h>
#include<conio.h>

int main(){
	char a[8]={'e','a','o','u','i','b','f','z'};
	
	int i, pos, aux;
	
	for(i=0;i<8;i++){
		pos = i;
		aux = a[i];
		while((pos>0) && (aux < a[pos-1])){
			a[pos] = a[pos-1];
			pos--;
		}
		a[pos] = aux;
	} 
		printf("\n imprimir en forma ASCENDENTE:\n\t");
	for(i=0;i<8;i++){
		printf("%c ", a[i]);
	}
	 printf("\n\n");
printf("\n  imprimir en forma descendente: \n\t");
	for(i=7;i>=0;i--){
		printf("%c ", a[i]);
	}

		getch();
	return 0;
}
