/* La sentencia while

	Sintaxis: 
			
			while(condicion){
				intrucciones;			
			}							*/

//1. Contabilizar 10 numeros
//2. Visualidad n asteriscos
//3. Contabilizar 10 numeros descedente
#include<iostream>

int main(){
	int n,i;
	
	printf("Digite el numero de asteriscos: ");
	scanf("%i",&n);
	
	i = 0;
	
	while(i<n){
		printf("*");
		i++;		
	}
	
	
	
	return 0;
}
			
