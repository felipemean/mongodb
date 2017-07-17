// Copiar el contenido de un array a otro
#include<stdio.h>
#include<conio.h>
void copiando(int a[], int b[], int tamanio);
int main(){
	int array1[5] = {2,5,4,3,7};
	int array2[5];
	
	printf("Compiando ARRRAYS\n\n");
	
	copiando(array1,array2,5);
	
	getch();
	return 0;
}
//a[] = array1
void copiando(int a[], int b[], int tamanio){
	int i;
	for(i=0; i<tamanio;i++){
		b[i]=a[i];  //array2 = array1
	}	
	for(i=0;i<tamanio;i++){
		printf("%i",b[i]); //array2
	}
}

