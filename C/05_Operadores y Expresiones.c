//Operaciones de asignación
#include<stdio.h>
int main(){
	int a,b,c,f;
	a=10;
	a=b=c=f=20;
	printf("\nEl valor de a,b,c y f es :  %i \"%i\" %i %i y  %i\n", a,b,c,f);
	a= a+20;
	b+=20;
	printf("\nAhora a vale  %i\n\n", a);
		printf("Ahora b vale  %i\n", b);
	
	b-=5;
	printf("\nAhora b vale  %i\n\n", b);	
			b*=2;
	printf("\nAhora b vale  %i\n\n", b);
	
				b/=2;
	printf("\nAhora b vale  %i\n\n", b);
	return 0;
}
