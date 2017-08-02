/*6. Rellenar un array de 10 números, posteriormente utilizando punteros indicar cuales
son números pares y su posicion en memoria.*/

#include<stdio.h>

int main(){
	int i,a[10];
	int *p_a;
	
	for(i=0;i<10;i++){ //Pidiendo los números al usuario
		printf("Digite un numero a[%i]: ",i);
		scanf("%i",&a[i]);
	}
	
	p_a = a; //indicar al puntero que inicie en a[0]
	
	for(i=0;i<10;i++){ //Comprobar números pares
		if(*p_a%2==0){
			printf("\nNumero par: %i",*p_a);
			printf("\nPosicion: %p",p_a);
			printf("\n");
		}
		p_a++;
	}
	
	
	return 0;
}
