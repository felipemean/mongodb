#include<stdio.h>

int cuenta_vocales(char *);
int main(){
	char nombre[20];
	
	printf("\n Teclea tu nombre:\n\t");
	gets(nombre);
	
	
	printf("\n El numero de vocales es:  %i", cuenta_vocales(nombre));
	
	return 0;
}

//nombre\0

int cuenta_vocales(char *s){
	int count=0;
	
	while(*s){   //Mientras que s no sea nulo va a seguir repitiendose  \0
		switch(*s){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u': count++;
		}	
	
		s++;	
	}
	return count;	
}

