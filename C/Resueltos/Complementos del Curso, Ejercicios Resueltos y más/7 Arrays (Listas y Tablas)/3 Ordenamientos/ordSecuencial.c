// BUSQUEDA SECUENCIA A[5]={4,7,92,3,1}; DATO = 4;  COMPROBAR SI EL DATO ESTA EN LA LISTA
#include<stdio.h>
#include<conio.h>
int main() {
 int a[5]= { 7, 92, 3, 4, 14} ;
 char band = 'F';
 int i, dato;
 	//Busqueda secuencial: 
	dato = 4;
 	i=0;
 	while((band == 'F') && (i<5)){
 		if(a[i] == dato){
 			band= 'V' ;
 		}
 		i++;
 	}
 	
if(band== 'F'){
 		printf("\nEL numero no exite en el array");
 	}else if(band=='V'){
 				printf("\nEL numero EXISTE en el array, posicion:  %i", i);
}
	getch();
	return 0;
	
}
