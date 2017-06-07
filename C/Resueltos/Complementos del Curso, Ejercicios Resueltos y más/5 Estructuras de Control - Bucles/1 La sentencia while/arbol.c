//hacer un arbol de n filas
#include<stdio.h>
int main(){
	int i,j,k,numerofilas;
	printf("\tTeclea el numero de filas del arbol:\t");scanf("%i",&numerofilas);
	for(i=0;i<=numerofilas;i++){
		for(k=0;k<=(numerofilas-i);k++){
			printf(" ");
		}
		for(j=0;j<=(i*2);j++){
			printf("*");
		}	
		printf("\n");
	}
	return 0;
}
