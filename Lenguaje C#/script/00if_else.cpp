#include<iostream>
#include<cmath>
#define PI 3.14159

using namespace std;

int main(){
	int numero, opt, i=0;
	const double PIconta= 3.14;
	cout<< " teclea una operacion a realizar\n 1.-sumar\n 2.- restar 3. Multiplicar 4.- potencia\ 5. raiz cuadrada"<< endl;
	cin<< opt;
	cout<< " Teclea un numero"<<endl;
	cin>>numero;
	
	
	
	if( numero <=10 ){
		
		if (i<=5){
			cout<<"Entro al if" << endl;
		}else{
		cout<<"Numero mayor de 5, entro en else"<<endl;
		}
	
	}
	cout<<"teclea un numero menor de 10"<<endl;

	
	
	return 0;
}
