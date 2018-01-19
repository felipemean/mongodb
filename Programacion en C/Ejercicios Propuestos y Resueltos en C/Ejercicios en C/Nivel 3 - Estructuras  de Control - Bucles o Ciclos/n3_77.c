#include<stdio.h>

int main(){
	int suma=0 , i;
	

	
	i=0;
	
	while ( i<= 10){
		
		if ( i%2 == 0 ){
			
			suma = suma + i ;
			printf( " +  %i =  %i \n", i,suma);
		}
		
		
		i++;
	}
	
		printf(" \n La suma de los 10 primeros números pares es:        %i.\n", suma);
	
	return 0;
}
