/*3. Reservar memoria con malloc para un array de tipo double para 1000 numeros, y
comprobar si el puntero es válido (si el puntero devuelve NULL, significa 
que no hay suficiente memoria).*/


#include<stdio.h>
#include<stdlib.h>
#define TOPE 1000

int main(){
	double *p_array;
	int i;
	
	p_array = malloc(TOPE*sizeof(double));
	
	if(p_array == NULL){
		printf("Error en la Asignacion de memoria");
	 	return -1;//Intentar recuperar memoria
	}
	else{
		srand(time(NULL));
		for(i=0;i<1000;i++){
			p_array[i] = 1 + rand()%((TOPE+1)-1);
			printf("%i. Numero: %lf\n",i+1,p_array[i]);
		}	
	}
	
	return 0;
}

