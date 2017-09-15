/*11. Calcular la cantidad de segundos que están incluidos en el número de horas,
minutos y segundos ingresados por el usuario.*/ 

#include<stdio.h>

int main(){
	int horas,minutos,seg, t1,t2,t3,total;
	
	printf("Digite el numero de horas: ");
	scanf("%i",&horas);
	printf("Digite el numero de minutos: ");
	scanf("%i",&minutos);
	printf("Digite el numero de segundos: ");
	scanf("%i",&seg);
	
	t1 = horas * 3600;
	t2 = minutos * 60;
	t3 = seg * 1;
	
	total = t1 + t2 + t3;
	
	printf("El equivalente en segundos es: %i",total);
	
	return 0;
}
