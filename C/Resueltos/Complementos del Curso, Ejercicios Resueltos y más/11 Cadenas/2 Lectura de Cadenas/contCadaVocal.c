// contar vocales

#include<stdio.h>

int main(){
	
	int c, conta=0, conte=0, conti=0, conto=0, contu=0 ;
	
	while(EOF != (c = getchar())){
		switch(c){
			case  'a': conta++; break;
				case  'e': conte++; break;
					case  'i': conti++;break;
					case  'o': conto++;break;
					case  'u': contu++;break;
		} 
	}
	printf("\n la frase tiene %i  vocales  a", conta);
	

	printf("\n la frase tiene %i  vocales e", conte);

	printf("\n la frase tiene %i  vocales i", conti);

	printf("\n la frase tiene %i  vocales o ", conto);
	
	printf("\n la frase tiene %i  us", contu);
	
	
	return 0;
	
}


