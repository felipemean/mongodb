
#include<stdio.h>
#define TAM 20


int main(){
	int i,numero[TAM],pares[TAM],impares[TAM];
	int n;
	
	srand(time(NULL));
	
	for(i=0;i<TAM;i++){
		numero[i] = 5 + rand()% + (21-1)-5;
	}
	
	printf("Pares:\n\n");
	for(i=0;i<TAM;i++){
		if(numero[i]%2==0){
			printf("%i.\n",numero[i]);
		}
	}
	
	printf("\nImpares:\n\n");
	for(i=0;i<TAM;i++){
		if(numero[i]%2==1){
			printf("%i.\n",numero[i]);
		}
	}	
	
	return 0;
}
