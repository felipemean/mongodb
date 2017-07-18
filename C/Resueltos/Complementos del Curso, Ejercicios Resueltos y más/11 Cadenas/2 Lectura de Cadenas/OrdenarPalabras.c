#include<stdio.h>
#include<string.h>

int main(){
	
	
	char palabra1[60];
	char palabra2[60];
	
	printf("\t Teclea una palabra	:	"	);
	gets(palabra1);
	
	printf("\t Teclea la segunda palabra	:	"	);
	gets(palabra2);
	
	
	
	if(strcmp(palabra1,palabra2) > 0){  // palabra 1 mayor que palabra 2,, Luego palabra 1 va después que p2
		
		printf("\n	%s   %s	", palabra2, palabra1 );
	}else{
			printf("\n	%s   %s	", palabra1, palabra2 );
	}
	
	
	return 0;
}
