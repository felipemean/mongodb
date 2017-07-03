#include<stdio.h>
#include<conio.h>

int main(){
	int a[5]={1,2,3,4,7}, i;
	int b[] = {2,3,4,7,8,9};
	
	printf("%i %i \n\n", a[5], b[5]);
	for(i=0;i<5;i++){
		printf("%i", a[i]);
	}
	printf("\n");
	for(i=0;i<6;i++){
		printf("%i", b[i]);
	}
	getch(); // hace que el ejecutable mno se cierre
	return 0;
}
