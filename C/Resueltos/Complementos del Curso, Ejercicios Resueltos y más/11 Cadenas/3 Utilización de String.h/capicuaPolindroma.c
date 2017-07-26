// PALABRA CAPICUA O POLINDROMO    RECONOCER  somos "anita lava la tina"
#include<stdio.h>
#include<string.h>

int main(){
	char palabra1[20];
	
		char palabra2[30];

	printf("\n\t Teclea una palabra a se posible POLINDROMA o CAPICUA   \n\t ");	
	gets(palabra1);
	strcpy(palabra2, palabra1);  //palabra2= reconocer;
	
	strrev(palabra2);
	
	if(strcmp(palabra1,palabra2) == 0){
		printf("\n\t La palabra %s  es capicua o POLINDROMA	", palabra1);
	}else{
			printf("\n\t La palabra %s  NO   es capicua o POLINDROMA	" , palabra1);

		
	}
	
	
	
	return 0;
}
