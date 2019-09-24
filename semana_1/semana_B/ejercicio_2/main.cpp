#include <iostream>

using namespace std;
int main() {
    int denominacion,respuesta;
    string personaje;
    cout<<"Ingrese denominacion: ";cin>>denominacion;
    respuesta=denominacion;
    if(denominacion==1){
        personaje="George Washington" ;
    }else if (denominacion==2){
        personaje="Thomas Jefferson";
    }else if (denominacion==5){
        personaje="Abraham Lincoln ";
    }else if (denominacion==10){
        personaje="Alexander Hamilton";
    }else if (denominacion==20) {
        personaje="Andrew Jackson";
    }else if (denominacion==50) {
        personaje="Ulysses S. Grant";
    }else if (denominacion==100) {
        personaje="Benjamin Franklin";
    }else if (denominacion==500||denominacion==1000||denominacion==5000||denominacion==10000){
        personaje="Denominacion descontinuada" ;
    }else{ personaje="No existe esa denominacion";}

    cout<<"La denominacion de "<<respuesta<< " es: "<< personaje<<endl;
    return 0;
    }