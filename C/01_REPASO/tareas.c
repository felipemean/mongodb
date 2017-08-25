// Program de Menu. 1. Crear fichero, añadir tareas, leer fichero, salir
#include<stdio.h>
#include<stdlib.h>

FILE *fd1;

void crearFile();
void anadirTexto();
void leerFile();

int main(){
	int opc;
	
	 char file1[] = "C:\\ruta\\manto\\tareas_23_08_17.txt" ;
	printf("\n Teclea una opcion de las siguientes:	\n");
		printf("\n1. Crear fichero de tareas del dia: \n'C:\\ruta\\manto\\tareas_dd_mm_aa.txt' ");
		printf("\n2. Añadir tareas al fichero de tareas del día:\n '%s' ", file1);
		printf("\n3. Leer tareas al fichero de tareas del día:\n '%s' ", file1);
		printf("\n4. Salir del programa.");
	printf("\n OPCION:	");	
	scanf("%i",&opc);
		printf("\n Has elegido la opcion: %i", opc);	
		
	while( opc != 4){
	switch(opc){
		case 1: crearFile(); break;
			case 2: anadirTexto(); break;
				case 3: leerFile(); break;
		}
	}
	printf("\n Has salido del Programa");	
return 0;
}

void crearFile(){
	char file[]= "C:\\ruta\\manto\\tareas_23_08_17.txt" ;
	char file1[40] ;

	printf("\n formato:  'C:\\ruta\\manto\\tareas_23_08_17.txt'\nTeclea el nombre del fichero segun dicho formato: \n"); 

	gets(file1);
	printf("\n Creando el fichero: %s", file1);
	fd1 = fopen(file1,"wt");
	fclose(fd1);

	
}

void anadirTexto(){
	char file[]= "C:\\ruta\\manto\\tareas_23_08_17.txt" ;
	char file1[40] ;


		printf("\n formato:  'C:\\ruta\\manto\\tareas_23_08_17.txt'\nTeclea el nombre del fichero segun dicho formato: \n"); 
	 
		printf("\n Creando el fichero: %s", file1);
		fd1 = fopen(file1,"wt");

}

void leerFile(){
		printf("\n Has elegido la opcion leerFile");
}

