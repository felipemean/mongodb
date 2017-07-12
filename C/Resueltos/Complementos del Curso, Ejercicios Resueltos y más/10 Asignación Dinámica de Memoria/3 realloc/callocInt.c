// funcion calloc()
#include<stdio.h>
#include<stdlib.h>

int main(){
	int *p1;
	
	p1 = calloc(1, sizeof(int)); // reservo espacio en mi memoria dinamica
	
	* p1 = 15;
	
	printf("%i ",*p1);
	
	return 0;
}
