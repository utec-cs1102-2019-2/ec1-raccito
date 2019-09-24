#include <iostream>
using namespace std;

int main(){
   int fila;
   string columna,a,b,c,d,e,f,g,color;

    cout<<"- Este programa le indicara si el tablero escogido es blanco o negro"<<endl;
    cout<<"- Ingrese cordenadas de tablero"<<endl;
    cout<<"- Ingrese columna(letra): ";cin>>columna;
    cout<<"- Ingrese fila(numero): ";cin>>fila;
    if (columna==a||columna==c||columna==e||columna==g) {
        if (fila == 1 || fila == 3 || fila == 5 || fila == 7){color="negro";}
        else{color="blanco";}
    }else if(fila == 2 || fila == 4 || fila == 6 || fila == 8){color="blanco";}
        else{color="negro";}

    cout<<"el color es: "<<color<<endl;
    return 0;
}
