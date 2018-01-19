#include <stdio.h>
#include <stdlib.h>


int main()
{
    int numero, n1, n2;
    printf("Hello world!\n");
    printf("Calcular si un numero es par o impar\n");

    printf("Introduce un numero entero:\t");
    scanf("%i",&numero);

    if(numero %2 == 0 ){
        printf("El numero %i es PAR", numero);
    }else{
         printf("El numero %i es IMPAR", numero);
    }

    printf("\nIntroduce dos  numeros enteros:\t");
    scanf("%i %i",&n1, &n2);

    if(n1 > n2 ){
        printf("El numero %i es mayor que %i", n1,n2);
    }else{
         printf("El numero %i es mayor que %i", n2,n1);
    }

    return 0;
}
