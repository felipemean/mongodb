// PROCDIMIENTOS   void   NO RETORNA ningun valor;
#include<stdio.h>
	
void comprobar(numero);
	
	int main(){
		int numero,x;
		printf("\n\tDigita 1 numero:\t"); scanf("%i", &numero);
		comprobar(numero);
		
	return 0;
	}
	

	
	void comprobar(int numero){ 
	 	if(numero%2==0){
	 			printf("\n\tEl numero es PAR\n");
	 	
	 	}else{
	 			printf("\n\tEl numero es IMPAR\n");
	 }
	}
	
