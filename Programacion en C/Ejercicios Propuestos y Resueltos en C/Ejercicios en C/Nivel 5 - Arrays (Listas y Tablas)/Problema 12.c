/*12. Hacer un array pidiendo al usuario el numero de elementos, y
rellenar el array con numeros digitados por el teclado, luego pedir
al usuario un numero, y hacer una busqueda secuencial para indicar 
si ese elemento existe o no, tambien entregar posicion.*/

#include<stdio.h>
#include<conio.h>

int main(){
	int a[50],i,elementos,numero;
	char band = 'F';
	
	printf("Digite el total de elementos del array: ");
	scanf("%i",&elementos);
	printf("\n\n");
	for(i=0;i<elementos;i++){
		printf("Digite un numero, array[%i]: ",i);
		scanf("%i",&a[i]);
	}
	
	printf("\n Ahora digite el numero a buscar: ");
	scanf("%i",&numero);
	//Comenzando busqueda secuencial
	i=0;
	while((band=='F')&&(i<elementos)){
		if(a[i]==numero){
			band='V';
		}
		i++;
	}
	
	if(band=='F'){
		printf("\nEl numero no existe");
	}
	else if(band=='V'){
		printf("\nEl numero existe, y esta en la posicion: %i",i-1);
	}
	
	getch();
	return 0;
}
