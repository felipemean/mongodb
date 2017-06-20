#include<stdio.h>
int main(){
	int i, numero, cont=0;
	printf("Introduce un Numero:\t"); scanf("%i", &numero);
	
	for(i=0;i<=numero;i++){
		if( numero % i == 0){
			cont++;
		}
	}
	
	if(cont>2){
		printf("El numero es compuesto");
	}else{ 
		printf("El numero es primo");
	}
	return 0;
}
