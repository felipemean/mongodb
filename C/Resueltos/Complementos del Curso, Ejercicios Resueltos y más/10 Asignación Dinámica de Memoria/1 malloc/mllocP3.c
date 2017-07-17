#include<stdio.h>
#include<stdlib.h>

#define TOPE 100

int main(){
	double *p_array ;
	int i;
	
	p_array = malloc(TOPE *sizeof(double));
	
	if(p_array == NULL){
			printf(" ERROR en la asignacion de mmoria");
			return -1 ;  // Intentar recuperar memoria
	} else{
		srand(time(NULL));
		for(i=0;i<TOPE;i++){
			p_array[i] = 1 +rand() % ((TOPE + 1) -1);
			printf("%i.-  %lf. \n", i+1, p_array[i]);
		}
	}

	
	return 0;
}

