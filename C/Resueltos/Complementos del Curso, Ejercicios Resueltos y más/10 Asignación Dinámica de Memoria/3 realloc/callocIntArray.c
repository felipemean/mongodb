// funcion calloc()
#include<stdio.h>
#include<stdlib.h>

int main(){
	int *p1;
	
	//p1 = calloc(1, sizeof(int)); // reservo espacio en mi memoria dinamica
	p1= calloc(5 , sizeof(int));  // reservo para un array de 5
	int i;
	
	for(i=0;i<5;i++){
		printf(" Teclea un numero:	");
		scanf("%i", &p1[i]);
	}

	printf("\n\n");
	for (i=0;i<5;i++){
		printf("%i ",p1[i]);
	}
	
	return 0;
}
