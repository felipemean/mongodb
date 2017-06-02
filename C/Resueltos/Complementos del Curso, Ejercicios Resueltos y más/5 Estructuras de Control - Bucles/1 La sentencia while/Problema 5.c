//5. Sumar 1-2+3-4...

/*
impares (+)
pares (-)

suma_pares = -2 -4 -6 ...
suma_impares = 1 + 3 + 5...

suma = suma_pares + suma_impares

1-2+3-4+5-6
-1+3-4+5-6
2-4+5-6
-2+5-6
3-6
-3
4 - 7
-4 - 8
5 - 9
-5 - 10

*/

#include<stdio.h>

int main(){
	int i, suma=0,suma_pares=0,suma_impares=0,n,ne;
	
	printf("Digite el total de elementos de la serie: ");scanf("%i",&n);
	
	i = 1;
	
	while(i<=n){
		if(i%2==0){
			ne = i * (-1);
			suma_pares = suma_pares + ne;
		}
		else{
			suma_impares = suma_impares + i;
		}
		i++;	
	}
	
	suma = suma_pares + suma_impares;
	
	printf("\n La suma total es: %i",suma);	
	
	return 0;
}
