#include<stdio.h>

int main(){
	
	int n=0;
	
	while( n < 10){
		if ( n%2 ==0){
		printf("\n%i es un numero PAR",n );
		}else{
			printf("\n%i es un numero IMPAR",n );
		}
	
	n= n+1;
	}
	
	
	
	return 0;
}
