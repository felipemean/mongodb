/*7. Hace un programa que muestre 3 números ordenados de ascendentemente, 
utilizar un procedimiento para cada operación.*/

#include<stdio.h>
void ascendente(int a,int b, int c);

int main(){
	int a,b,c;
	
	printf("Digite 3 numeros: ");
	scanf("%i %i %i",&a,&b,&c);
	
	ascendente(a,b,c);
	
	return 0;
}

void ascendente(int a,int b, int c){
	printf("\nOrden Ascendente\n");
	if(a>=b && a>=c){
		if(b>=c){
			printf("%i %i %i",c,b,a);
		}
		else{
			printf("%i %i %i",b,c,a);
		}
	}
	if(b>=a && b>=c){
		if(a>=c){
			printf("%i %i %i",c,a,b);
		}
		else{
			printf("%i %i %i",a,c,b);
		}
	}
	if(c>=a && c>=b){
		if(a>=b){
			printf("%i %i %i",b,a,c);
		}
		else{
			printf("%i %i %i",a,b,c);
		}
	}
	
}
