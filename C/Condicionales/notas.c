#include<stdio.h>
// Condicional MULTIPLE

int main (){
	char nota;
	printf("Digite una nota (A-F): \n");
	scanf("%c", &nota);
	switch(nota){
		
		case 'A': printf("Es EXCELENTE"); break;
		case 'B': printf("Es NOTABLE");break;
		case 'C': printf("Es APROBADO");break;
		case 'E': printf("Es SUSPENSO");break;
		case 'D':
		case 'F': printf("Es REPROBADO");break;
		default: printf("NO ESCRIBIO LA NOTA CORRECTAMENTE");
	}
	
	return 0;
}
