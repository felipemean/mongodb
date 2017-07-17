//Problemas aritmeticos
//Perid 2 numeros y sumarlos, restarlos, multiplicarlos y dividirlos 
#include<stdio.h>
int main(){
	int n1,n2,suma=0,resta=0,mult=0,div=0;
	printf("Digita el primer número :  \n");
	scanf("%i",&n1);
		printf("Digita el segundo número : \n");
	scanf("%i",&n2);
	
		printf("Mejor Digita de nuevo los 2 numeros :  \n");
	scanf("%i %i",&n1,&n2);
	printf("Gracias Caballero o Dama  \n");
	
	suma= n1 +n2;
	resta = n1 - n2;
	mult= n1 * n2;
	div= n1 / n2;
	
	printf("\nLa suma es :  %i\n",suma);
		printf("La resta es :  %i\n",resta);
			printf("La multiplicacion es :  %i\n",mult);
				printf("La division  es :  %i\n",div);
				
	
		return 0;
}
