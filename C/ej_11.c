/* Calular numero de segundos icluido en  horas ,minutos y segundos ingresados por el usuario */
#include<stdio.h>

int main(){
	int horas, minutos , segundos , t1, t2 , t3 , total ;
	
	printf("\n Digite el numero de horas , minutos y segundos:  \n");
	scanf("%i %i %i", &horas, &minutos, &segundos);
	
	/*	printf("\n Digite el numero de minutos:  \n");
	scanf("%i", &minutos);
	
		printf("\n Digite el numero de segundos:  \n");
	scanf("%i", &segundos); 
	*/
	
	t1 = horas * 3600;
	t2 = minutos * 60;
	t3 = segundos * 1;
	
	total = t1 + t2 + t3;
	
	printf("\n El equivalente en segundos es :    %i",  total);
	
	
	
	return 0;
}
