#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	cout<<"Mi proyecto de Consola Windows"<<endl;
	int count=1;
	for( int i=10; i<= 100 ; i= i * 2 ) {
		
		cout << count << ".- " << i <<" multiplicado por " << 2 << " Igual = " << i*2 << endl;
		count++;
}
	return 0;
}
