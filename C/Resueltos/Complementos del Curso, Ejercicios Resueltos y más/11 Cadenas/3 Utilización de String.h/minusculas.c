//p17  strlwr()


struct datos{
	char nombre[20];
	char apellidos[20];
	
}datos1;
	


int main(){
	
	printf("Digita tu nombre en mayusculas   EN MAYUSCULAS:	\n");
	gets(datos1.nombre);
	
	printf("Digita tu apellidos en mayusculas   EN MAYUSCULAS:	\n");
	gets(datos1.apellidos);
	
	strlwr(datos1.nombre);
		strlwr(datos1.apellidos);
		
		printf("Su nombre es:\t %s	\n", datos1.nombre);
		
			printf("Sus apellidos son:\t  %s	\n", datos1.apellidos);
	
	
	return 0;
	
	
}
