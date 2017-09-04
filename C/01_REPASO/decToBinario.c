#include<stdio.h>

void binario(int n);
int main(){
	int n;
	printf(" Teclea 1000 para salir");
	
	printf("\n Teclea un numero en base diez:	"); scanf("%i", &n);
	
		if(  n > 0){
			
				binario(n);	
		} else{printf("FIN");
		}
			
		
			
		
	

	return 0; 
}


void binario(int a){
	
	if(a>1) binario(a/2);
	
	printf("%i", a%2);
	
}
