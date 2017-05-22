//calcule la media de tres numeros
#include<stdio.h>

int main(){
float n1,n2,n3;
	float media;
	
	printf("\nCALCULO MEDIA DE 3 NUMEROS\n");
	printf("Digita tres numeros \n");
	scanf("%f %f %f",&n1,&n2,&n3);
	media = (n1 + n2 +n3) / 3 ;
	printf("\n La media de los tres numeros %.2f , %.2f , %.2f es : \n %.2f",n1,n2,n3,media);
	return 0;
}
