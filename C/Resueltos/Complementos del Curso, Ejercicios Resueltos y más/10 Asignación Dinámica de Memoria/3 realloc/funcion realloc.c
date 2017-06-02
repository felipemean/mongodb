//Funcion realloc()

#include<stdio.h>
#include<stdlib.h>

int main(){
	int *vector,*vector_convertido;
	int i;
	vector = malloc(3*sizeof(int)); //Reservando memoria para 3 elementos
	//Primer Vector
	vector[0] = 1;
	vector[1] = 2;
	vector[2] = 3;
	
	for(i=0;i<3;i++){
		printf("%i ",vector[i]);
	}
	
	//realloc()
	vector_convertido = realloc(vector,5*sizeof(int)); //Ampliando el arreglo a 5
	//Terminando de agregar valores
	vector[3] = 4;
	vector[4] = 5;
	
	printf("\n\n");
	
	for(i=0;i<5;i++){
		printf("%i ",vector_convertido[i]);
	}
	
	
	free(vector_convertido);
	return 0;
}
