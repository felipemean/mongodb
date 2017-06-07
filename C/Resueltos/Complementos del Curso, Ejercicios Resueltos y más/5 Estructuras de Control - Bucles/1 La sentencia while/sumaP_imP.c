#include<stdio.h>
//  1-2+3-4+5-6.......= suma
int main(){
	int i,n, suma=0, suma_pares=0, suma_impares=0,ne;
	//los impares son positivos y los pares son negativos
	printf("\tDigita un numero, para sumar\n\t\t");
	scanf("%i", &n);
	i=1;
	while(i<=n){

	if( i%2 ==0){
		ne= i * (-1);
		suma_pares += ne;
	}else{
		suma_impares += i;
	}
	i++;
}
	suma = suma_pares + suma_impares;
	printf("\n\tLa suma total es :  %i\n", suma);
	return 0;
}
