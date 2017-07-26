#include<stdio.h>
#include<string.h>

int main(){
	char a[60],  b[60];
	
	printf("\n	Teclea una palabra:	\n\t");
	gets(a);
	
	printf("\n	Teclea una palabra:	\n\t");
	gets(b);
	
	if(strcmp(a,b)>0){
		printf("\n\t %s\t%s", b,a);
	}else{
		printf("\n\t %s\t %s", a, b );
	}
	
	return 0;
}
