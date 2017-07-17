#include<stdio.h>
int main(){
	int n,i;
	
	puts("\tCalcula los multiplos de 3 para el numero que quieras\n\tIntroduce un numero :\n");
	scanf("%i", &n);
	i=1;
	printf("\t  Son multiplos de 5  los siguiente numeros : \n\n");
	printf("");
	while (i<=n){
		if( i %5 == 0 ){
			printf("\t ,%i", i);
			
		}
		i++;
		
	}
		
return 0;
}
