//2. Leer una cadena de caracteres con getchar() y contabilizar cuantos espacios ocupa.

#include<stdio.h>


int main(){
	int c,cont=0;
	
	while(EOF != (c=getchar())){
		cont++;
	}
	
	printf("La cadena tiene %i espacios ocupados",cont-1);
	
	return 0;
}


