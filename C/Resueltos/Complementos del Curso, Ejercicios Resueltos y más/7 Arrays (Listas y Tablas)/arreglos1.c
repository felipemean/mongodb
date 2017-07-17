#include<stdio.h>
#include<conio.h>

int main(){
	float a[5];
	int i;
	
		printf("\n\n");
	for(i=0;i<5;i++){
		printf("\n%i.  Teclea un numero\t", i+1); scanf("%f", &a[i]);
	}
	printf("\n\n{");
	for(i=0;i<4;i++){
		printf("%.2f , ", a[i]);
	}
	printf("%.2f}", a[4]);
	getch();
return 0 ;
}
