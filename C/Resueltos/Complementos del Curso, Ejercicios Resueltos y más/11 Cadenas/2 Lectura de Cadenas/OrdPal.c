#include<stdio.h>
#include<string.h>
#include<conio.h>  // permite getch

int main(){
	 int i,j,k;
	int l = 0;
	char palabra[10][20];
	char aux[20];
	printf(" Para Teminar escriba * \n");
	
	do{
			printf(" Teclea una  palabra ");
			gets(palabra[l]);		// Lee las cadenas y las almacena.
			l++;
	}

	while(strcmp(palabra[l-1],"*") !=0 );  // compara cadenas y mantiene el bucle do-while hasta que tecleas *
	
	
	for(i=0; i<l-1;i++){
		printf("\n%i. La palabra %i es: %s", i+1,i+1,palabra[i] );
	}
	
	// ordenar
	
	for(i=0; i<l-1;i++){
		k=i;
			strcpy(aux, palabra[i]);
			for(j=i+1;j<l;j++){
				if(strcmp(palabra[j], aux)<0){
					k=j;
					strcpy(aux, palabra[j]);  //permite hacer una copia auxiliar de la cadena nombre[j];
					
				}
			}	
		strcpy(palabra[k],palabra[i]);
		strcpy(palabra[i], aux);
	}
	
		
	for(i=0; i<l;i++){
			printf("\n");
		printf(" %s", palabra[i] );
	
	}
	
	return 0;
}
