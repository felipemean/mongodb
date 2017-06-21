//minusculas
#include<stdio.h>
int main(){
	
	char letra='a'; //61h   la 'a' equivale a la letra hexadecima 61h
	do{
		printf("%c.\n",letra);  // a
		letra++; // b,c,d,e
	}while(letra<='z');
	return 0;
}
