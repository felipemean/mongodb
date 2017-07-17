//9. Sumar 2 matrices

#include<stdio.h>
#include<conio.h>
void sumar(int a[2][2],int b[2][2]);

int main(){
	int tabla1[2][2] = {{1,2},{2,1}};
	int tabla2[2][2] = {{2,1},{1,2}};
	int i,j;
	
	sumar(tabla1,tabla2);	
	
	getch();
	return 0;
}

void sumar(int a[2][2],int b[2][2]){
	int suma[2][2],i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			suma[i][j] = a[i][j]+b[i][j];
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%i ",suma[i][j]);
		}
		printf("\n");
	}
	
	
}

