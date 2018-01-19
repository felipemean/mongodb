// 4. Determinar si un número es par, impar 

#include<stdio.h>

int main(){
	int numero;
	
	printf("Escriba un numero: , 0 para salir\n");
	scanf("%i",&numero);
	
 
	while(numero != 0 ){
				if(numero%2==0){
		puts("El numero es par");
	}
	if(numero%2==1){
		puts("El numero es impar");
	}
		printf("Escriba un numero: , 0 para salir\n");
	scanf("%i",&numero);
		
		
	}	
	

 

	
	
	return 0;
}
