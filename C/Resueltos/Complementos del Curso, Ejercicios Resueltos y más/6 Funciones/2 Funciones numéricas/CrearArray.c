// Array de 100 numeros Aleatorios entre 1 y 1000.
// Amacenar numeros pares en un array
// Copiar el contenido de un array a otro
#include<stdio.h>
#include<conio.h>

int funcion_aleatoria(int n);
int main(){
	int array1[100];
	int n, i;
	
	printf("\n\tCreando  ARRAY de 100 numeroa aleatorios \n\n");
	
	for(i=0;i<100;i++){
		srand(time(NULL));
	// variable = limite_inferior 1 + rand() % ((limite_superior 10 +1 ) - limite_inferior 1);
	numero = 1 + rand() % ((1000+1)- 1);
	
	}
	
	
	getch();
	return 0;
}

