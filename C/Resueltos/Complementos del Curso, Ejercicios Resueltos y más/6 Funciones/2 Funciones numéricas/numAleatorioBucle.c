// La Funcion ALEATORIA
// srand(time(NULL));   Otorga el poder de generar un valor aleatorio.
// variable = limite_inferior + rand() % ((limite_superior +1 ) - limite_inferior);time.h

#include<stdio.h>
#include<time.h>
void funcion_aleatoira();
int main(){
		funcion_aleatoira();
	return 0;
}


void funcion_aleatoira(){
	int numero,i,li,ls;
	srand(time(NULL));
	printf("\nTeclea el limite inferior:\t"); scanf("%i", &li);
		printf("\nTeclea el limite superior:\t"); scanf("%i", &ls);
	// variable = limite_inferior 1 + rand() % ((limite_superior 10 +1 ) - limite_inferior 1);
	for(i=1;i<=10;i++){
		numero = li + rand() % ((ls+1)- li);
		printf("\n%i.  Mi numero aleatorio es: \t%i", i, numero);
	}
	
	
}
