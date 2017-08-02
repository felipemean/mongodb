// Hacer un programa que realice la media aritmetica de 2 numeros.

#include<stdio.h>
int media(int n1,int n2);

int main(){
	int a,b;
	
	printf("Digite 2 numeros: ");
	scanf("%i %i",&a,&b);
	
	
	printf("\n La media aritmetica es: %i",media(a,b));
	
	return 0;
}

int media(int n1,int n2){
	int media_aritmetica = 0;
	
	media_aritmetica = (n1+n2)/2;
	
	return media_aritmetica;
}
