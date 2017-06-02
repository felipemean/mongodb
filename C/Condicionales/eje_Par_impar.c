#define TARIFA3 0.9

int main(){
	int numero;
		puts(" Escriba un numero \n");
		scanf("%i", &numero);
		if( numero % 2 == 0 ){
			puts("\nEl numero es par");
		}else{
			puts("\nEl numero es impar");
		}
	return 0;
	}
