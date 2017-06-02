/* Arreglos Bidimensionales (Matrices)

	- Matrices de enteros ** 
	- Matrices de flotantes **
	- Matrices de caracteres **
*/

#include<stdio.h>

int main(){
	char tabla[2][3] = { {'a','b','c'} , {'d','e','f'} };
	int i,j;
	
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%.c ",tabla[i][j]);
		}
		printf("\n");
	}	
	
	return 0;
}
