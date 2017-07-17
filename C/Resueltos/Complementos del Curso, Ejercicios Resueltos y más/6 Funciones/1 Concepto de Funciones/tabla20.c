#include<stdio.h>
void tabla();
int main(){
	int n;
	char opc;
	do{
			printf("\n\nDigita un numero en la pantalla\n\t"); 
				printf("\n\nDigita 0 para salir de la pantalla\n\t"); 
			scanf("%i", & n);
	
		tabla(n);
	  	}while(n != 0);
	
		

	
	return 0;
}

void tabla(int n){
	int i;
	if(n==0){
 	}else{
	for(i	=1;i<=20;i++){
		printf("\n %i * %i = %i ", n, i, n * i );
	}
}
	
	
	
}
