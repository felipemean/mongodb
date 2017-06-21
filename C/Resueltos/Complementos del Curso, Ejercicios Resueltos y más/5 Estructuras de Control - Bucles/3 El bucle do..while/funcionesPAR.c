	#include<stdio.h>
	
		int comprobar(int numero);
	
	int main(){
		int numero,x;
		printf("\n\tDigita 1 numero:\t"); scanf("%i", &numero);
		x = comprobar(numero);
		if(x==0){
			printf("El numero es PAR");
		}else{
			printf("El numero es IMPAR");
		}
	return 0;
	}
	

	
	int comprobar(int numero){ 
	 	if(numero%2==0){
	 		return 0;
	 	}else{
	 		return 1;
	 	}
	}
	
