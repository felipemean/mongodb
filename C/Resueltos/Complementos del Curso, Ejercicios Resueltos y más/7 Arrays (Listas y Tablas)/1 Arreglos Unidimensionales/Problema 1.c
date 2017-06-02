/*1. Copiar el contenido de un Array1 de 5 elementos hacia 
otro Array2.*/

#include<stdio.h>
#include<conio.h>

int main(){
	int array1[5]={2,5,6,4,8};
	int array2[5];
	
	printf("Copiando Arrays\n");
	copiarArray(array1,array2,5);	
	
	getch();
	return 0;
}

void copiarArray(int a[],int b[],int tamanio){
	int i;
	
	for(i=0;i<tamanio;i++){
		b[i]=a[i];  //array2 = array1;
	}
	
	for(i=0;i<tamanio;i++){
		printf("%i.\n",b[i]);
	}
}
