#include<stdio.h>
#include<string.h>

int main(){
	char cad[] = "Hola Mundo que tal?";
	
	strcat(cad, "    Mi nombre es Felipe");
	
	printf("\n %s", cad);
	
	
	return 0;
}
