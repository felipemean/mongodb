//3. Pasar de numero entero a numero binario con Recursividad

#include<stdio.h>
void binario(int n);

int main(){
	int numero;
		
	do{
		printf("Digite un numero: ");
		scanf("%i",&numero);
	}while(numero<0);
	
	binario(numero);
	//// calculo 8 --> 1000
	printf("\n");
	// 8 8>1 binario(4), 4>1 binario(2), 2>1 binario(1), 1>1 printf("1",1%2),printf("0",2%2),printf("0",4%2),printf("0",8%2),
		
	return 0;
}

void binario(int n){
	printf("%i",n%2);
	if(n>1) binario(n/2);
	
//	printf("%i",n%2);
	
}
