// suma n primeros numeros
#include<stdio.h>

int main(){
	int cont, n, suma = 0, multiplica= 1;
	
		cont = 1;
	printf("Digite un numeros :  "); scanf("%i",&n);
	if ( n > 10){
	
		while(cont<= n){
	//	suma = suma + cont ;
		multiplica *= cont;
		cont ++;
		
	}

	printf("\n\tLa Multiplicacion vale:  %i", multiplica);	
		
	}else{
		
	while(cont<= 10){
	//	suma = suma + cont ;
		suma = suma + cont;
		cont ++;
		
	}

	printf("\n\tLa Suma vale:  %i", suma);	
	}
	
	return 0;
}
