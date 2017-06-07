// Cubo de un numero
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	int opcion, numero, cubo;

	printf("\tBienvenido al programa\n");
		printf("\n1. Cubo de un numero");
		printf("\n2. numero par o impar");
		printf("\n3. Salir");
		printf("\n\nOpcion:\n");
		scanf("%i", &opcion);
		switch(opcion){
			case 1:  printf("Calculando el cubo de un numero \n  Digite un numero :    ");
						scanf("%i", &numero);
						cubo = pow ( numero, 3 );
						printf("El cubo del numero  %i   es  %i", numero, cubo);
			break;
			
			case 2:  printf("numero par o impar: \n  Digita un numero:   \n");
						scanf("%i", &numero);
						if( (numero % 2 ) == 0){
							printf("El numero es PAR");
						}else{
							printf("El numero es IMPAR");
						}	
			break;
			case 3:  break;
			
			default: printf("Digite la opcion CORRECTA");
		}
	
	return 0;
}
