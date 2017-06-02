/*11. Hacer una lista de 10 numeros, luego pedirle al usuario que 
digite un numero, y atraves de una busqueda secuencial determinar si 
el numero existe en la lista o no, y ademas indicar en que posicion se
encuentra.*/

#include<stdio.h>
#include<conio.h>

int main(){
	int a[10] = {4,6,3,10,15,23,56,78,9,54};
	int i,numero;
	char band = 'F';
	
	printf("Digite un numero: ");
	scanf("%i",&numero);
	i=0;
	while((band=='F')&&(i<10)){
		if(a[i] == numero){
			band = 'V';
		}
		i++;
	}
	
	if(band=='F'){
		printf("El elemento no existe");
	}
	else if(band == 'V'){
		printf("El elemento si existe, en la pos: %i",i-1);
	}
	
	getch();
	return 0;
}

