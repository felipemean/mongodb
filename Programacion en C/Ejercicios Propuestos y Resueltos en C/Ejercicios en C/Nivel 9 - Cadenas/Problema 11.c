/*11. Pedir 2 palabras al usuario y ordenarlas alfabeticamente.*/

#include<stdio.h>
#include<string.h>

int main(){
	char palabra1[20],palabra2[20];
	
	printf("Digite la primera palabra: ");
	gets(palabra1);
	printf("Digite la segunda palabra: ");
	gets(palabra2);
	
	
	//Ordenandolas alfebeticamente
	if(strcmp(palabra1,palabra2)>0){
		printf("\n%s , %s",palabra2,palabra1);
	}
	else{
		printf("\n%s , %s",palabra1,palabra2);
	}
	
	
	return 0;
}
