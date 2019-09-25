#include <iostream>
using namespace std;
int main() {
    int anio,dia,mes,parmes,pardia;
    string nombre;
    cout << "Ingrese fecha de nacimiento" <<endl;
    cout << "Dia: ";cin>>dia;
    cout << "Mes: ";cin>>mes;
    cout << "Anio: ";cin>>anio;
    parmes=mes%2;
    pardia=dia%2;
    if(mes>=1&&mes<=3){
        if(parmes==0){
            if(pardia==0){nombre="Miguel";}
            else {nombre="Grabiel";}
        }
        else {
            if(pardia==0){nombre="Rafael";}
            else {nombre="Uriel";}
        }
    }else if (mes>=4&&mes<=6){
        if(parmes==0){
            if(pardia==0){nombre="Jofiel";}
            else {nombre="Raizel";}
        }
        else {
            if(pardia==0){nombre="Barachiel";}
            else {nombre="Jehudiel";}
        }
    }else if(mes>=7&&mes<=9){
        if(parmes==0){
            if(pardia==0){nombre="Chamuel";}
            else {nombre="Selatiel";}
        }
        else {
            if(pardia==0){nombre="Zadquiel";}
            else {nombre="Metatron";}
        }
    }else if(mes>=10&&mes<=12){
        if(parmes==0){
            if(pardia==0){nombre="Ariel";}
            else {nombre="Jeremiel";}
        }
        else {
            if(pardia==0){nombre="Anael";}
            else {nombre="Azrael";}
        }
    }else{nombre="error en ingresar mes";}
    cout<<"El nombre de su angel es: "<<nombre;
    return 0;}