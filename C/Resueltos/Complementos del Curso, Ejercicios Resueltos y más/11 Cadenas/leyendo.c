#include<stdio.h>

int main(){
	char palabra[20];
	
	do{
		scanf("%s", palabra);
		
		if(!feof(stdin)){
			printf("\n%s", palabra);
		}
	}while(!feof(stdin));
	
	
	return 0;
}
