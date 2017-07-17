#include<stdio.h>
int main(){
	int i, numero, cont;
	cont=0;
	printf("\nIntroduce un Numero:"); scanf("%i", &numero);
	
	for(i=1;i<=numero;i++){
		if(numero%i == 0){
			cont++;
		}
	}
	
	if(cont>2){
		printf("\nEl numero es compuesto");
	}else{ 
		printf("\nEl numero es primo");
	}
	return 0;
}
