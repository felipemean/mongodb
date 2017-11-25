#include<iostream>
using namespace std;
int main(){

    int array1[5];   //declaracion  /
    int array2[]={1,2,3,4,5}; /* asignacion */
for (int i=0; i<5;i++){

    cout <<"Indice "<< i << ":  "; cin>> array1[i];
}

    cout << "array1={";
    for (int i=0 ; i<4; i++){
        cout << array1[i]<<",";
    }
    cout << array1[4]<<"}";

        return 0;
}
