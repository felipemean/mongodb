#include<stdio.h>
// switch        case etiqutea: sentencia; breaK 
//					default: sentncia;

int main (){
	char vocal;
	printf("Digite una vocal (a-u): \n");
	scanf("%c", &vocal);
	switch(vocal){
		
		case 'a': printf("Es la vocal A"); break;
		case 'e': printf("Es la vocal E");break;
		case 'i': printf("Es la vocal I");break;
		case 'o': printf("Es la vocal O");break;
		case 'u': printf("Es la vocal U");break;
		default: printf("NO ESCRIBIO LA VOCAL CORRECTAMENTE");
	}
	
	return 0;
}
