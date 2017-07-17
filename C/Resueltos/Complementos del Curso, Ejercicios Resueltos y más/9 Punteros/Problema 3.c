//3.Imprimir el alfabeto en mayuscula con Punteros

#include<stdio.h>

int main(){
	char c;
	char *pc; //Posicion de c
	pc = &c;
	
	for(c= 'A';c<='Z';c++){
		printf("%c",*pc);
	}
	
	return 0;
}
