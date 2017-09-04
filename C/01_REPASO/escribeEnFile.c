#include <stdio.h>
#include <stdlib.h>
// Ejemplo aprenderaprogramar.com
int main() {
 FILE* fichero;
 fichero = fopen("cursoAF1.txt", "wt");
 fputs("Aprender a programar (linea 1)\n", fichero);
 fputs("requiere esfuerzo (linea 2)\n", fichero);
 fputs("y dedicacion (linea 3)", fichero);
 fclose(fichero);
 printf("Proceso completado");
 return 0;
} 
