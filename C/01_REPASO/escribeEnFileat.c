#include <stdio.h>
#include <stdlib.h>
int main() {
 char cadena1 [] = "Aprender a programar (linea 1)\n";
 char cadena2 [] = "requiere esfuerzo (linea 2)\n";
 char cadena3 [] = "y dedicacion (linea 3)";
 FILE* fichero;
 fichero = fopen("cursoAF1.txt", "at");
 fputs(cadena1, fichero);
 fputs(cadena2, fichero);
 fputs(cadena3, fichero);
 fclose(fichero);
 printf("Proceso completado");
 return 0; // Ejemplo aprenderaprogramar.com
}
