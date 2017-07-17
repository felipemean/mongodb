#include<stdio.h>
#include<conio.h>

int mian(){
	float a[5];
	int i;
		printf("\n\n");
	for(i=0;i<5;i++){
		printf("\n%i.  Teclea un numero"); scanf("%f", &a[i]);
	}
	printf("\n\n");
	for(i=0;i<5;i++){
		printf("\n");
		printf("%2.f", a[i]);
		
	}
	getch();
return 0 ;
}
