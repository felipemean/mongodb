// 3. Múltiplos de 3 desde 1 hasta n

#include<stdio.h>

int main(){
	int n, i; 
	
	printf("Multiplos de 3 desde 1 hasta n. \n ");
	printf("Digite el total de elementos 'n': \n");
	scanf("%i",&n);
	
	printf("Los Multiplos de 3 desde 1 hasta %i, son: \n ", n);
	
	i = 1;
	
	while(i<=n){
		if(i%3==0){
			printf("El numero %i es multiplo de 3.\n",i);
		}
		i++;
	}	
	
	return 0;
}
