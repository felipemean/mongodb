//Ordenamiento por Seleccion

#include<stdio.h>
#include<conio.h>

int main(){
	int a[5] = {3,1,4,2,5};
	int i,j,min,temp;
	
	for(i=0;i<5;i++){
		min = i;
		for(j=i+1;j<=5;j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	
	for(i=0;i<5;i++){
		printf("%i ",a[i]);
	}
	
	getch();
	return 0;
}
