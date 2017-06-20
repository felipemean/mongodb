// suma 1-2+3-4.......
#include<stdio.h>

int main(){
	int n,m,n1,n2 ,i,sumapar=0;
	i=1;
	printf("Suma de pares desde n hasta m");
	printf("\n\tDigite dos  numeros n y m:\n"); scanf("%i %i", &n1, &n2);
	n=n1;
	m=n2;
	i =n1;
	
	while(i<=m){
		if(i%2 == 0){
			 sumapar += i;
		}
		i++;
	}
	printf("\n El resultado de sumar los pares desde %i hasta %i  es \n\t\t%i:", n,m,sumapar); 
	return 0;
}
