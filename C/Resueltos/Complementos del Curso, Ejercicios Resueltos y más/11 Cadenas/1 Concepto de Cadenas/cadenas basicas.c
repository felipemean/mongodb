#include<stdio.h>
#include<string.h>

int main(){
	char cad[] = "ABC"; //ABC\0
	int i;
	char *c;
	
	c = cad; // c = A
	
	for(i=0;i<strlen(cad)+1;i++){
		printf("%c\n",*c);
		c++;
	}
	
	return 0;
}
