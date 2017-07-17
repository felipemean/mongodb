#include<stdio.h>
// comprobar si un numero es positivo o negativo
int main(){
	float numero;
	puts("\n  Introduce un numero :  \n");
	scanf("%f", &numero);
	if ( numero < 0){
			printf("Este numero %.2f es negativo", numero);
		}else{
			printf("Este numero %.2f es positivo", numero);
		}
	
	return 0;
}
