#include <stdio.h>

int main(){
	char msg[]="Hello World";
	
	puts(msg);
	printf(msg);
	
	
	printf("\nUsing printf...\n");
	printf("This is line 1.");
	printf("This is line 2.");
	
	printf("\n\n");
	printf("Using puts...\n");
	puts("This is line 1.");
	puts("This is line 2.");
	
	printf("End of main...\n");
	
	return 0;
}
