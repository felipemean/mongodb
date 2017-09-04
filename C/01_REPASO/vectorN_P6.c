#include<stdio.h>


int main(){
	int n[10] ;
	int *p_n, i,tam;
	printf("Teclea tamaño del array:	");scanf("%i", &tam);
		
  //  es una variable puntero  p_n = n[0]; inicia la poscion del puntero y le asigna un valor
	
	printf("\n Vamos a crear un vector de 10 posiciones");
	for(i=0; i<tam ;i++){	
		fflush(stdin);
		printf("\n%i. Numero del vector posicion %i:	", i, i	);
		scanf("%i", &n[i]);
	}	
			p_n= n; 
	printf("\nn[tam]  =  {");
	for (i= 0 ;i<tam; i++)  {
		printf("%i, ", i, *p_n);  // imprimir los valores del vertor
			
	}
	printf(" }");

	for(i=0;i<tam;i++){
		if(*p_n%2 ==0){
			printf("\n Numero par: %i", *p_n);
			printf("\n Posicion en memoria: %p", p_n);
			printf("\n ");
		}
		p_n++;
	}
	
	
	return 0;
}
