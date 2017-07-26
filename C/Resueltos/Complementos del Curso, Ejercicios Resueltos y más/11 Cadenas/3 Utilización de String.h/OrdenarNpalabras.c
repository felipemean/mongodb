// pedir n palabras al usuario y ordenarlas alfabeticamengte

/*11. Pedir 2 palabras al usuario y ordenarlas alfabeticamente.*/

#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
	char palabra[10][20];
	char aux[20];
	int i,j,k , n=0;
	
	do{	printf("\n\t Teclea una palabra %i:	\n", n+1); // lee cadenas y las almacena
	gets(palabra[n]);
	n++;	
	}
	while (strcmp(palabra[n-1],"*") != 0);  // compara la cadena con el valor "*" , si no coincide sigue
	
	    // ORDENAR CADENAS
    for(i=0; i<n-1; i++)
    {
        k=i;
        strcpy(aux, palabra[i]);
        for(j=i+1; j<n; j++)
        {
            if(strcmp(palabra[j], aux)<0)
            {
                k=j;
                strcpy(aux, palabra[j]);
               //permite hacer una copia auxiliar de la cadena palabra[j];
            }
        }
        strcpy(palabra[k],palabra[i]);
        strcpy(palabra[i],aux);
    }
    printf("\n\n");
     for(i=0; i<n; i++)
    {
        printf("%i.-	%s", i+1, palabra[i+1]);
        printf("\n");
    }
	printf("\n FIN");	
	return 0;
}
