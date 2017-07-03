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
	int numero;
	srand(time(NULL));
	// variable = limite_inferior 1 + rand() % ((limite_superior 10 +1 ) - limite_inferior 1);
	numero = 5 + rand() % ((10+1)- 5);
	printf("Mi numero aleatorio es: \t%i", numero);
	
}
