/*8. Reservar memoria para un arreglo de 5 numeros, rellenarlo con números que digite
el usuario, luego utilizar realloc para ampliar ese arreglo a 10 numeros y agregar
5 números mas, por ultimo imprimir el arreglo resultante de 10 números.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int *p_array,*p_arrayResultante;
	int i;
	p_array = malloc(5*sizeof(int));
	//Pidiendo los primeros 5 números
	for(i=0;i<5;i++){
		printf("%i. Digite un numero: ",i+1);
		scanf("%i",&p_array[i]);
	}
	
	//Ampliando el arreglo a 10 números 
	p_arrayResultante = realloc(p_array,10*sizeof(int));
	printf("\n\n");
	
	//Pidiendo los 5 numeros siguientes
	for(i=5;i<10;i++){
		printf("%i. Digite un numero: ",i+1);
		scanf("%i",&p_arrayResultante[i]);
	}
	printf("\n\n\n");
	//Imprimiendo el arreglo resultante de 10 números
	for(i=0;i<10;i++){
		printf("%i.\n",p_arrayResultante[i]);
	}
	
	free(p_arrayResultante);
	
	return 0;
}
