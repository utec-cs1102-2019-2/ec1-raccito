#include <iostream>
using namespace std;
int main() {
    float numero;
    int s;
    cout << "ingrese un float: ";cin>>numero;
    s=numero;
    numero-=s;
    cout<<"La parte entera es: "<<s<<endl;
    cout<<"La parte fraccionaria: "<<numero;
    return 0;
}