//programa que lea el sexo
#include<stdio.h>
#include<conio.h>

int main(){
	int i, numero, varon=0, mujer=0;
	char alumnos[30];
	
	printf("Teclea el total de alumnos de la clase"); scanf("%i", &numero);
	
	for(i=1;i<=numero;i++){
			fflush(stdin);
			printf("\n %i. Teclea el sexo del alumno@:  ",i);
			gets(alumnos);
			
			if(strcmp(alumnos,"masculino")==0){
				varon++;
			}else if(strcmp(alumnos,"femenino")==0){
				mujer++;
			}
	}
	 printf("\n El total de varones es :  %i", varon);
	printf("\n El total de mujeres es :  %i", mujer);
	
	getch();
	return 0;
}
