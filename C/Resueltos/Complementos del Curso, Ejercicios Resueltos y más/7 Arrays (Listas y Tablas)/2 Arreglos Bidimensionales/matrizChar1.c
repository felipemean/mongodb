// Arrays bidimensionales     tipo nombre [filas] [columnas]  , guardar tablas o matrices
#include<stdio.h>
#include<conio.h>
int main(){
	char matriz[2][3]={{'a','b','c'},{'d','e','f'}};
	//char matriz[2][3];
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("\n\t Teclea una letra matriz[%i][%i]:  ",i+1,j+1);
			scanf("%s", &matriz[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%c",matriz[i][j]);
		}
	}	
		
		
	getch();
	return 0;
}

