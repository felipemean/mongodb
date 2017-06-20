//Suna de los 10 primeros numeros pares
#include<stdio.h>
int main(){
	int suma=0,i;
	printf("Suma de los numeros pares hasta");
	for(i=0; i<=100;i+=2){
		if(i%2==0){
			suma +=i;	//suma = suma +i;
		}
	}
	printf("\nLa suma de los numeros pares es %i", suma);
	
	return 0;
}
