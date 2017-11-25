#include <iostream>
using namespace std;
int i=100;
int main(){
    /** Ambito de una variable **/
    int numero;
   	cout << "Teclea un numero"<<endl;
   	cin>> numero;
   	cout <<"Numero = " << numero << endl;
   	system("pause");
   	/*if ( numero < 01 && numero >1 ){
   		numero= 10;
	   }*/
    switch(numero){
    	case 1: cout << "Caso 1"<<endl;
    			break;
    	case 2 :
		case 3 :	
		case 4 :
		case 5 :
		case 6 :
		case 7 :
		case 8 :
		case 9 :
			
    	case 10 : cout <<"Caso menor de 10"<< endl;
    						break;
    	default: cout <<"Caso MAYOR de 10"<< endl;
	}


    return 0;
}

