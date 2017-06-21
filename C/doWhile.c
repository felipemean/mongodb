//Bucle do ...while . Lo ejecuta  al menos 1 vez
//Saludo
#include<stdio.h>
int main(){
	int i; i=1;
	char opc;
	do{
		printf(" %i , ", i);
		i++;
	}while(i<=10);
	printf("\b\n");
	do{
		fflush(stdin);
		printf("\n\tHola");
		printf("\n\nDigite 's' para saludar nuevamente\t"); scanf("%s", &opc);
	}while(opc=='s' || opc=='S');
	printf("\n\tGood bye\n");
		
	return 0;
}
