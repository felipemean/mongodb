#include<stdio.h>
int main(){
	int n,i;
	printf("Digite el numero a comprabar:\n"); scanf("%i", &n);
	i=1;
	
	while(i<=n){
		if(i%5==0){
			printf("\t%i. es multiplo de 5\n", i);			
		}
		i++; 
	}
	
	
	
	return 0;
}
