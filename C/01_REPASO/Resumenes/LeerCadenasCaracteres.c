#include<stdio.h>

int main(){
	
	int c;   // c es el caracter leido uno a uno por getchar()
	int count=0;
	while(EOF != (c=getchar())){  //mientras el c no sea fin de cadena
	//	putchar(c);
		count = count +1;
	}
	
	printf("\n Hay un total de %i caracteres:  ", count-1);
	
	return 0;
}
