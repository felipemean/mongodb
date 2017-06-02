#include<stdio.h>
#include<stdlib.h>

int main(){
	char tecla;
	
	printf("Programa de Borrado de Pantalla");
		printf("\n-----------------------------------------");
			printf("\n-----------------------------------------");
			
			printf("\n-----------------------------------------");
			printf("\n-----------------------------------------");
				printf("\nDigite el numero 1:");
	scanf("%c", &tecla);
	
	if (tecla=='1'){
		system("cls");
		printf("\n Ha funcionado el limpiado de pantalla\n\n");
		}else{
				fflush(stdin);
				printf("\n\nNO   Ha funcionado el limpiado de pantalla\n\n");
					printf("\n\nPor favor, digite el numero 1:\n\n");
					// se esta llenando el buffer y se limpia con fflush
				
					scanf("%c", &tecla);
					if(tecla=='1'){
						system("cls");
					}else{ printf("No Funciono");
					}
		}
	
	
	
	return 0;
}

