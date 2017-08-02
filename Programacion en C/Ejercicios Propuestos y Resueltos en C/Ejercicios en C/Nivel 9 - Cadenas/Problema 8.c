/*8. Pedir una cadena al usuario, posteriormente utilizar la funcion strcat() para 
añadir la frase "Que tengas un buen dia", al final de la cadena.*/

#include<stdio.h>
#include<string.h>

int main(){
	char cad[20];
	
	printf("Digite una Cadena: "); //Pedimos la cadena al usuario
	gets(cad);
	
	strcat(cad," Que tengas un buen dia"); //añadimos al final de la cadena
	
	printf("%s",cad);
	
	return 0;
}
