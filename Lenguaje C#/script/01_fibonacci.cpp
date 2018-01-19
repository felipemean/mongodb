#include <iostream>
using namespace std;

int main(){
    /** Arreglos unidimensionales **/
    int arreglo1[10];/**declaracion**/
    int arreglo2[]={1,2,3,4,5};/**asignacion**/

    for(int i=0;i<10;i++){
        cout<<"Indice "<<i<<":";
        cin>>arreglo1[i];
    }

    for(int i=0;i<10;i++){
        cout<<arreglo1[i]<<" ";
    }


    /**EL PRIMER ELEMENTO TIENE INDICE 0**/
    /**EL ULTIMO ELEMENTO TIENE INDICE n-1**/
    /*cout<<"El primer elemento es "<<arreglo1[0]<<endl;
    cout<<"El ultimo elemento es "<<arreglo1[9]<<endl;
    */
    return 0;
}
