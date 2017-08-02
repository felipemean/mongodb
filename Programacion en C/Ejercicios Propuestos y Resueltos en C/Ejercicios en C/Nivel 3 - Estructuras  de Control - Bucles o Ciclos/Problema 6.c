//6. Sumar pares desde n hasta m (Propuesto)

#include<stdio.h>

int main(){
	int n,m,suma=0;
	
	printf("Digite el comienzo n: ");scanf("%i",&n);
	printf("Digite el termino m: ");scanf("%i",&m);
	
	while(n<=m){
		if(n%2==0){
			suma = suma + n;			
		}		
		n++;
	}
	
	printf("\n La suma de pares es: %i",suma);

	return 0;
}
