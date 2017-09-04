#include<stdio.h>

void binario(float a);
int main(){
	float numero;
	printf(" Teclea un numero decimal del tipo 0,123 0 1000 para salir");
	printf("\n Teclea un numero en base diez:	"); scanf("%f", &numero);
		if(  numero < 1){
					binario(numero);	
		} else{printf("FIN");
		}
	
	return 0; 
}


void binario(float a){
  
  if(a<=0.999){
		
			printf("0");
				a = a * 2;
			binario(a);
		}else	 if(a>1){
			
			printf("1");
			a = a - 1;
			binario(a);	
		}else if( a=1){
				printf("1");	
		}	
}
