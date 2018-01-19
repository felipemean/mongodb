#include<iostream>
using namespace std;
int main(){

    char cadena1[] = " Felipe" ;
     char cadena2[] = {'H','o','l','a','\0'} ;
      char cadena3[10] ;
cout << cadena2 << cadena1<<endl;
  cout << "Teclea una palabra"<< endl;
cin.getline(cadena3,30);
cout<< " La palabra es : "<< cadena3<<endl;
        return 0;
}
