// getchar()   se usa para leer caracter a caracter			LEE
//	putchar() para escribir en el stdout "Escribir SALIDA"  IMPRIME

#include<stdio.h>

int main(){
	int c;	
	int cont=0;
	while( EOF != ( c=getchar())){  // Mientras  c no sea el final de la cadena sigue leyendo
		putchar(c);
		cont++;
	}
	printf("\nLa cadena ocupa %i espacios", cont-1);
	return 0;
}
