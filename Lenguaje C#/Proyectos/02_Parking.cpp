#include <iostream>
using namespace std;
int main(){
    /**En un estacionamiento cobran $/.1.50 por hora o fracción.
    Diseñe un programa que determine cuanto debe pagar un cliente por
    el estacionamiento de su vehículo, conociendo el tiempo de
    estacionamiento en horas y minutos.**/

    int horas,minutos;
    float total;

    cout<<"Horas:";
    cin>>horas;
    cout<<"Minutos:";
    cin>>minutos;

    if(minutos>0){
        horas++;/**horas=horas+1;**/
    }
    total = horas*1.5;
    cout<<"El total a pagar es "<<total<<endl;


    return 0;
}
