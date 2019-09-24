#include <iostream>

using namespace std;
const float descuento=0.8;
int main() {
    float precio=0;
    int zona;
    string respuesta,nombrzona;
    cout<<"Ingrese zona a escojer elija una opcion(#): ";cin>>zona;
    if(zona==1){
        precio +=212;
        nombrzona="Super vip" ;
    }else if (zona==2){
        precio +=170;
        nombrzona="Vip";
    }else if (zona==3){
        precio +=136;
        nombrzona="Preferencial";
    }else if (zona==4) {
        precio +=59;
        nombrzona="General";
    }else if (zona<1||zona>4){
        cout<<"intente de nuevo";
    }
    cout<<"Usted es usuario claro?: ";cin>>respuesta;
    if (respuesta =="si"){
        precio*=descuento;
    }else if(respuesta == "no"){
        precio+=0;}
    cout<<"Usted va para la zona "<<nombrzona<< " debera pagar "<<precio<<endl;
    return 0;
}//profe en este ejercicio si demore un poco jaja