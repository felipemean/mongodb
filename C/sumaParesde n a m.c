// suma 1-2+3-4.......
#include<stdio.h>

int main(){
	int n, cont, suma=0, sumapar=0, sumaimpar=0, ne;
	cont=1;
	
	printf("\n\tDigite un numero:\n"); scanf("%i", &n);
	
	while(cont<=n){
		if(cont%2 == 0){
		 ne=cont *(-1);
		 sumapar += ne;;
		}else{
			sumaimpar +=cont;
		}
		suma= sumaimpar + sumapar;
		cont++;
	}
	printf("\n REsultado de la suma 1-2+3-4.....    es \n\t\t%i:", suma); 
	return 0;
}
