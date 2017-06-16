#include<stdio.h>

int main(){
	
	int n1,n2;
	printf("Digite un nuemro:\n");
	scanf("%i", &n1);
	
	(n1%2 == 0 ) ? printf("\nEl numero es par") : printf("\nEl numero es Impar");
	
	return 0;
}
