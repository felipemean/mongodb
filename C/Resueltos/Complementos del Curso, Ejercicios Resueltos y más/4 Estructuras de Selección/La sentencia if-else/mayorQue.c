//condicional anidado

#include<stdio.h>
int main(){
	int n1, n2;
	puts("Digita 2 numeros");
	scanf("%i %i", &n1, &n2);
	
	if (n1>n2){
			printf("%i es mayor que %i", n1,n2);
		} else{
			printf("%i es mayor que %i", n2,n1);
		}	
return 0;
}

