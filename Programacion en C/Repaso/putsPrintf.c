#include <stdio.h>

int main(){

	printf("Using printf..PRINTF no incluye salto de linea.\n");
	printf("This is line 1.");
	printf("This is line 2.");

	printf("\n\n");
	printf("Using puts..PUTS incluye salto de linea.\n");
	puts("This is line 1.");
	puts("This is line 2.");

	printf("End of main...\n");

	return 0;
}
