#include<stdio.h>
/* Nivel 1.ej. 11. Calcular la cantidad de segundos que están incluidos 
en el número de horas, minutos y segundos ingresados por el usuario. */
int main(){
    int sg,hora,min, suma=0;
    
    printf("\nTeclea numero de horas: \n"); scanf("%i", &hora);
    printf("\nTeclea numero de minutos: \n"); scanf("%i", &min);
    printf("\nTeclea numero de segundos: \n"); scanf("%i", &sg);
    
    suma = ( hora * 60 * 60 ) +( min *60 ) + sg ;
    
    printf(" \nLa cantidad de segundos incluidos en %i horas , %i minutos y %i segundos son:   %i", hora, min,sg, suma) ;
    
    return 0;
}
