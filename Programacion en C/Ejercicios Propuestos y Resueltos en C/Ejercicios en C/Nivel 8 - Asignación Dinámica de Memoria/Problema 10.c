/*10. Hacer un puntero array de tipo float, pedir el usuario el número de elementos,
luego reservar memoria dinámica con calloc, luego llenar el array, imprimir todos
los elementos, y por ultimo liberar el espacio de memoria dinámica utilizado.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	float *p1;
	int n,i;
	
	printf("Digite el numero de elementos: ");
	scanf("%i",&n);
	
	p1 = calloc(n,sizeof(float));
	
	if(p1 == NULL){
		printf("Memoria Insuficiente");
		return -1; //Intentar recuperar memoria
	}
	
	printf("\nDigite valores: \n");
	for(i=0;i<n;i++){
		printf("Digite un numero: ");
		scanf("%f",&p1[i]);
	}
	
	for(i=0;i<n;i++){
		printf("%.2f\n",p1[i]);
	}
	
	free(p1); //Liberar el espacio de memoria dinámica utilizado
	
	return 0;
}
