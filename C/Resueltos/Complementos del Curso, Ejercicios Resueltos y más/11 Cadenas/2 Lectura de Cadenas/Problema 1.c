//1. Utilizar las funciones getchar() y putchar() para para leer e imprimir un string.


/* getchar():
La función getchar( ) se utiliza para leer carácter a carácter. La llamada a getchar()
devuelve el carácter siguiente del flujo de entrada stdin. En caso de error, 
o de encontrar el fin de archivo, devuelve EOF (macro definida en stdio. h).	
 
   putchar():
La función putchar() se utiliza para escribir en la salida (stdout) carácter a carácter.
El carácter que se escribe es el transmitido como argumento.
*/

#include<stdio.h>

int main(){
	int c; 
	
	while(EOF != (c=getchar())){ //mientras c sea diferente del final de la cadena
		putchar(c);
	}
	
	//La salido del bucle es con control-z.
	
	return 0;
}
