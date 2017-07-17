// contar vocales

#include<stdio.h>

int main(){
	
	int c, cont=0;
	
	while(EOF != (c = getchar())){
		switch(c){
			case  'a':
					case  'e':
							case  'i':
									case  'o':
											case  'u': cont++;
			
		} 
	}
	printf("\n la frase tiene %i  vocales", cont);
	
	
	return 0;
	
}


