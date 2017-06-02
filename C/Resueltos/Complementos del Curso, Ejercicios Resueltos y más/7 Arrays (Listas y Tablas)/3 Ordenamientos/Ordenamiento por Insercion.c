//Ordenamiento por Insercion

#include<stdio.h>
#include<conio.h>

int main(){
	int n[5] = {3,1,4,2,5};
	int i,j,aux;
	
	for(i = 0; i < 5; i++){
            j = i;
            aux = n[i];
            while ((j > 0) && (aux < n[j - 1])) {
                n[j] = n[j - 1];
                j--;
            }
            n[j] = aux;
    }
	
	for(i=0;i<5;i++){
		printf("%i ",n[i]);
	}
	printf("\n\n");
	for(i=4;i>=0;i--){
		printf("%i ",n[i]);
	}
	
	getch();
	return 0;
}
