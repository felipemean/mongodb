#include<stdio.h>

int main(){
	
	int c;   // c es el caracter leido uno a uno por getchar()
	
	while(EOF != (c=getchar())){  //mientras el c no sea fin de cadena
		putchar(c);
	}
	
	
	return 0;
}
