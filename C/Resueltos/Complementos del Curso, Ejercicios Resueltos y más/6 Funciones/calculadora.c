#include<stdio.h>
void sumar();
void menu();
void restar();
void multiplicar();
void dividir();


int main(){
	menu();
	
	return 0;
}


void menu(){
	int opc;
	
	do{
			printf("\n\n1. Sumar");
			printf("\n2. Restar");
			printf("\n3. Dividir");
			printf("\n4. Multiplicar");
			printf("\n5. Salir");
			printf("\n\n1. Opcion: \t"); scanf("%i", &opc);
				
				switch(opc){
					case 1: sumar();break;
						case 2: restar();break;
							case 3: dividir();break;
								case 4: multiplicar();break;
								
				}
				
	}while(opc!=5);
	
}

void sumar(){
	int n1,n2,suma=0;
	printf("\nDigite 2 numeros: \t"); scanf("%i %i", &n1,&n2);
	suma = n1 + n2;
		printf("\nLa suma es: \t%i", suma);
}

void restar(){
	int n1,n2,resta=0;
	printf("\nDigite 2 numeros: \t"); scanf("%i %i", &n1,&n2);
	resta = n1 - n2;
		printf("\nLa resta es: \t%i", resta);
}

void multiplicar(){
	int n1,n2,multiplo=1;
	printf("\nDigite 2 numeros: \t"); scanf("%i %i", &n1,&n2);
	multiplo = n1 * n2;
		printf("\nLa multiplicacion es: \t%i", multiplo);
}

void dividir(){
	int n1,n2,division=0;
	printf("\nDigite 2 numeros: \t"); scanf("%i %i", &n1,&n2);
	division = n1 / n2;
		printf("\nLa division es: \t%i", division);
}




