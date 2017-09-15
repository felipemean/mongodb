/*4. Leer un string con getchar() y contabilizar cuantas veces aparece la vocal a,e,i,o,
u, e imprimir el contador de cada una.*/

#include<stdio.h>

int main(){
	int c,cont_a=0,cont_e=0,cont_i=0,cont_o=0,cont_u=0;
	
	printf("Digite una palabra (y luego control-z): ");
	
	while(EOF != (c=getchar())){
		switch(c){
			case 'a': cont_a++;break;
			case 'e': cont_e++;break;
			case 'i': cont_i++;break;
			case 'o': cont_o++;break;
			case 'u': cont_u++;break;
		}
		putchar(c); //Imprimimos todos los caracteres con putchar()
	}
	
	printf("Vocal a: %i",cont_a);
	printf("\nVocal e: %i",cont_e);
	printf("\nVocal i: %i",cont_i);
	printf("\nVocal o: %i",cont_o);
	printf("\nVocal u: %i",cont_u);
	
	return 0;
}
