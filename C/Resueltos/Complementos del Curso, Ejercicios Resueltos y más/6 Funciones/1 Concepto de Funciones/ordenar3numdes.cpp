#include<stdio.h>
void desc(int a, int  b, int c);

int main(){
	int a,b,c;
	printf("\n\tTeclea tres numeros:\t"); scanf("%i %i %i", &a, &b,  &c);
	desc(a,b,c);
	return 0;
}

void desc(int a, int b, int c){
	if(a>=b && a>= c){// a es mayor que a y que b
		if(b>c){
			printf(" %i  > %i > %i ", a, b, c);
		}else{
				printf(" %i  > %i > %i ", a, c, b);
		}
	}
	if(b>=a && b>= c){// a es mayor que a y que b
		if(a>c){
			printf(" %i  > %i > %i ", b, a, c);
		}else{
				printf(" %i  > %i > %i ", b, c, a);
		}
	}
		if(c>=b && c>= a){// a es mayor que a y que b
		if(a>b){
			printf(" %i  > %i > %i ", c, a, b);
		}else{
				printf(" %i  > %i > %i ", c, b, a);
		}
	}
}
