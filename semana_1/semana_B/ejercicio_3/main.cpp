#include <iostream>
using namespace std;
int main() {
    int hora1,hora2,minuto2,minuto1;

    cout << "ingrese hora 1: " << endl;cin>>hora1;
    cout << "ingrese minuto 1:" << endl;cin>>minuto1;
    cout << "ingrese hora 2: " << endl;cin>>hora2;
    cout << "ingrese minuto 2: " << endl;cin>>minuto2;
    if(hora1<hora2) {cout << "la primera hora es primero" << endl;
    }else if(hora1==hora2){
        if(minuto1<minuto2){cout << "la primera hora es primero" << endl;
        }else if(minuto1==minuto2){
            cout << "la primera hora y la segunda son iguales" << endl;
        }else{
            cout << "la segunda hora es primero" << endl;}
    }else{cout << "la segunda hora es primero" << endl;}




    return 0;
}