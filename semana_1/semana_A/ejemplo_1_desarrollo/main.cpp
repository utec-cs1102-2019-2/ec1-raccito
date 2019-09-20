#include <iostream>

using namespace std;
int main() {
    string nombre,lugar,pais, mes,equipo,apellido;
    float altura,dia,goles, anho;
    cout<<"ingrese nombre: "<<endl;cin>>nombre;
    cout<<"ingrese apellido: "<<endl;cin>>apellido;
    cout<<"ingrese lugar de nacimiento: "<<endl;cin>>lugar;
    cout<<"ingrese pais: "<<endl;cin>>pais;
    cout<<"ingrese dia de nacimiento: "<<endl;cin>>dia;
    cout<<"ingrese mes de nacimiento: "<<endl;cin>>mes;
    cout<<"ingrese anho de nacimiento: "<<endl;cin>>anho;
    cout<<"ingrese su altura: "<<endl;cin>>altura;
    cout<<"ingrese de su equipo: "<<endl;cin>>equipo;
    cout<<"ingrese goles: "<<endl;cin>>goles;
    cout<<"\n\n";
    cout<<"*************************************************************"<<endl;
    cout<<nombre<<" "<<apellido<<"\n\n";
    cout<<"Nacio en "<<lugar<<", "<<pais<<" el "<<dia<<" de "<<mes<<" de "<<anho<<endl;
    cout<<"Mide "<<altura<<"m"<<endl;
    cout<<"Jugo en el "<<equipo<<endl;
    cout<<"mientras era jugador anoto "<<goles<<" goles"<<endl;
    cout<<"*************************************************************";




    return 0;
}
