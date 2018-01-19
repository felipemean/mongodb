#include<stdio.h>
#include<math.h>
int main(){
	printf("Hola Mundo");
	printf("\nTipos de Datos:\n");
	char a = 'a';
	short b= -15 ; // 2bytes - -128 ...127
	int c= 1024;   // 2 bytes = 0...65535
	int bytes= pow(2,8 );
	int dosbytes= pow(2,16 );
	int cuatrobytes= pow(2,32 );
	double m=pow(2,64);
		printf("short -%i... %i\n", (bytes/2),( bytes/2)  -1   );
	printf("int -%i... %i\n", (dosbytes/2),( dosbytes/2)  -1   );
		printf("int unsigned -%i... %i\n", 0 , dosbytes  -1   );
			printf("long -%i... %i\n", -(cuatrobytes+1)  , cuatrobytes   );
	printf("double -%2.f... %2.f\n", -m/2, m/2   );		
			
	return 0;
}
