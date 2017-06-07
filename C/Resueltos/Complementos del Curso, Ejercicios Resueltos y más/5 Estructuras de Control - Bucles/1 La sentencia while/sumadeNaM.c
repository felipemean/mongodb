#include<stdio.h>
//problema 6 sumar pares desde n hasta me
int main(){
	int i,n,m,suma=0;i=1;
	printf("\n\tSuma de pares desde el numero n hasta el m:\n\tTeclea numero n :\t");
	scanf("%i",&n);	
	printf("\n\tTeclea numero m :\t");
	scanf("%i",&m);	
	
	while(n<=m){
		if( n % 2 == 0){
			suma += n;
		}
		n++;
	}
	printf("La suma de pares es :\t%i",suma);
return 0;
}
