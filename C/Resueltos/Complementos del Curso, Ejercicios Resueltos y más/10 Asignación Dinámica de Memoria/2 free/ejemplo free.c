//free(puntero);

#include<stdio.h>
#include<stdlib.h>

int main(){
	int *p1;
	
	p1 = malloc(sizeof(int));
	
	if(p1 == NULL){
		printf("Memoria Llena");
	}
	else{
		printf("Hay espacio");
		*p1 = 15;
		printf("\n%i",*p1);	
	}
	
	free(p1); //Liberar espacio que apunta p1
	
	printf("\n%i",*p1);
	
	
	return 0;
}

