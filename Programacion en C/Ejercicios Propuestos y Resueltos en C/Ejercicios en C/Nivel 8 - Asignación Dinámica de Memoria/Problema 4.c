/*4. Pedir al usuario el numero de elementos para un array de numeros enteros, 
posteriormente comprobar con malloc si hay memoria suficiente (si el puntero es 
valido, es decir diferente de NULL), si la hay es entonces rellenar ese array con numeros
aleatorios, si no la hay decir que hay un error en la asignacion de memoria.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int *p_array,n,i;
	
	printf("Digite el total de elementos del array: ");
	scanf("%i",&n);
	
	p_array = malloc(n*sizeof(int));
	
	if(p_array == NULL){
		printf("Error en la Asignacion de memoria");
	 	return -1;//Intentar recuperar memoria
	}
	else{
		srand(time(NULL));
		for(i=0;i<n;i++){
			p_array[i] = 1 + rand()%((n+1)-1);
			printf("%i. Numero: %i\n",i+1,p_array[i]);
		}	
	}

	return 0;
}


