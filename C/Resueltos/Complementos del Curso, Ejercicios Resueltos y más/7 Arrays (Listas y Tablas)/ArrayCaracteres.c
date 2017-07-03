#include<stdio.h>
#include<conio.h>

int main(){
	char a[5] = {'a','e','i','o','u'};
	int i;
	
	
	printf("\n\n{");
	for(i=0;i<4;i++){
		printf("%c , ", a[i]);
	}
	printf("%c}", a[4]);
	getch();
return 0 ;
}
