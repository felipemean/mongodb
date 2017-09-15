#include<stdio.h>


int main(){
	char palabra[59];
	
	do{
		scanf("%s", palabra);
		
		if(!feof(stdin)){  // si estoy leyendo
			printf("\%s", palabra);
		}
	}while(!feof(stdin));
	
	
return 0;
}
