#include<stdio.h>
#include<stdlib.h>

int main(){
	float *p;
	int i, n;
	
	printf("\n Teclea el Numero de elementos:	"); scanf("%i", &n);
	
	p = calloc( n , sizeof(float));
	
	if(p == NULL){
		printf("Memoria Insuficiente");
		return -1; //Intentar recuperar memoria
	}
	
	for(i=0;i<n;i++){
		printf("\n%i.-  Teclea un numero:	", i+1);
		scanf("%f",  &p[i]);
		
	}
	printf("\n\n");
	
	for(i=0;i<n;i++){
		printf("%.2f ,", p[i]);
	}
	
	free(p);
	
	return 0;
}
