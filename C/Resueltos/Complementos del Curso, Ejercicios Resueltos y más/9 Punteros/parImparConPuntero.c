#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	int *p_n = &n ;
	
	printf("\n Teclea un numero entero:	");
	scanf("%i", &n);
	
	if(n%2 == 0){
		printf("\n\t El numero %i  es PAR", n);
	}else{
			printf("\n\t El numero %i  es IMPAR\n", n);
	}
			
	printf("\n\t El numero %i  ocupa la posicion de memoria:\n\n\t\t	%p\n\n",n,  p_n);
	
	
	system("pause");
	return 0;
}
