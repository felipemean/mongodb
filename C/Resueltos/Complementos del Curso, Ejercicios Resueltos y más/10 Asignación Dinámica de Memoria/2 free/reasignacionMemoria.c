#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int *vector, *vector_convertido;
	int i;
	vector = malloc(3 *sizeof(int)); // REservando memoria para tres elementos
	
	vector[0] = 1;
	vector[1] = 1;
	vector[2] = 3;
	
	for(i=0;i<3;i++){
		
		printf("%i ", vector[i]);
	}
	printf("\n\n");
	// realloc
	vector_convertido = realloc(vector,5 * sizeof(int));  //ampliando el arreglo a 5 elementos
	
	vector[3] = 6;
	vector[4] = 7;
	for(i=0;i<5;i++){
		
		printf("%i ", vector[i]);
	}
	
 	free(vector_convertido);
	return 0;
}
