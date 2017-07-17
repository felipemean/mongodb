/* El bucle for: 

	Sintaxis: 
	
			for(inicializacion; condicion; incremento){
			Instrucciones;
			...			
			}													*/

// 1 Imprimir 10 veces hola
// 2 ver como va avanzando la iteracion


#include<stdio.h>

int main(){
	int i; 
	
	for(i=1;i<=10;i++){
		printf("%i. Hola\n",i);
	}
	
	return 0;
}
