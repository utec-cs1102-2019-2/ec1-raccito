#include <iostream>
using namespace std;//se que es un poco largo pero a nada
string tren;
int edad,precio;
int main() {
cout<<"ingrese tipo de tren: ";cin>>tren;
cout<<"ingrese edad: ";cin>>edad;

    if(tren=="H"||tren=="h"||tren=="e"||tren=="E"){
        if(edad>0&&edad<=17){precio=800;}
        else if(edad>=18&&edad<=60){precio=990;}
        else if(edad>60){precio=700;}
    }
    else if(tren=="v"||tren=="V"||tren=="A"||tren=="a"){
        if(edad>0&&edad<=17){precio=350;}
        else if(edad>=18&&edad<=60){precio=500;}
        else if(edad>60){precio=700;}
    }
    cout<<"el precio que debera pagar es de: "<<precio;
    return 0;
}