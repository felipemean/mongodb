/*5. Hacer 2 estructuras una llamada promedio que tendra los siguientes miembros: 
nota1,nota2,nota3; y otro llamada alumno que tendra los siguientes miembros:
nombre, sexo, edad; hacer que la estructura promedio este anidada en la estructura
alumno, luego pedir todos los datos para un alumno, luego calcular su promedio, y por
ultimo imprimir todos sus datos incluidos el promedio.*/

#include<stdio.h>
#include<stdlib.h>

struct promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct alumno{
	char nombre[20];
	char sexo[20];
	int edad;
	struct promedio prom;
}alumno1;

int main(){
	float promedio=0;
	
	printf("Digite su nombre: ");
	gets(alumno1.nombre);
	printf("Digite su sexo: ");
	gets(alumno1.sexo);
	printf("Digite su edad: ");
	scanf("%i",&alumno1.edad);
	printf("Digite las 3 notas: ");
	scanf("%f %f %f",&alumno1.prom.nota1,&alumno1.prom.nota2,&alumno1.prom.nota3);
	
	promedio = (alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3)/3;
	
	printf("\n\n-Datos del Alumno-\n");
	printf("\nNombre: %s",alumno1.nombre);
	printf("\nSexo: %s",alumno1.sexo);
	printf("\nEdad: %i",alumno1.edad);
	printf("\nPromedio: %.2f\n",promedio);	
	
	system("pause");
	return 0;
} 
