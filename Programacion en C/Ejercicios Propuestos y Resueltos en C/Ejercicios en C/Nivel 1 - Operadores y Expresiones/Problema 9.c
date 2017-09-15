/*9. Calcular el nuevo salario de un obrero 
si obtuvo un incremento del 25% sobre su salario anterior.*/
#include<stdio.h>

int main(){
	float salario_inicial,aumento,salario;
	
	printf("Digite su salario: ");
	scanf("%f",&salario_inicial);
	
	aumento = salario_inicial*0.25;
	salario = salario_inicial + aumento;
	
	printf("\nSu nuevo salario es: %.2f",salario);
	
	
	return 0;
}
