// PALABRA CAPICUA O POLINDROMO    RECONOCER  somos "anita lava la tina"
#include<stdio.h>
#include<string.h>

int main(){
	char palabra1[]= "reconocer";
	
		char palabra2[30];
	
	strcpy(palabra2, palabra1);  //palabra2= reconocer;
	
	strrev(palabra2);
	
	if(strcmp(palabra1,palabra2) == 0){
		printf("\n\t La palabra es capicua o POLINDROMA	");
	}else{
			printf("\n\t La palabra NO   es capicua o POLINDROMA	");

		
	}
	
	
	
	return 0;
}
