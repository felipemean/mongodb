#include<stdio.h>
#include<conio.h>

int main(){
	char a[5] = {'a','i','o','u','e'};
	int i;
	char band = 'F',elemento;
	
	elemento = 'l';
	i=0;
	while((band=='F')&&(i<5)){
		if(a[i] == elemento){
			band = 'V';
		}
		i++;
	}
	
	if(band=='F'){
		printf("El elemento no existe");
	}
	if(band=='V'){
		printf("El elemento si exite en el array, en la posicion: %i",i-1);
	}
	
	
	
	getch();
	return 0;
}
