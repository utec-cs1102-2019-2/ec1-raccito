#include <iostream>
using namespace std;
void pedir_nota (float &a,float &b);

int main() {
    float notapc1= 0.0;
    float puntos= 0.0;
    pedir_nota(notapc1,puntos);
    cout<<notapc1<<"\t"<< puntos<<endl;
    float *ptr_pc1=&notapc1;
    *ptr_pc1 =notapc1+ puntos;
    cout<<*ptr_pc1<<endl;
}
void pedir_nota (float &a,float &b){
    cin>> a;
    cin>> b;
}

//lo que yo ise
//#include <iostream>
//using namespace std;
//void pedir_nota (float &a,float &b);

//int main() {
  //  float notapc1,puntos,resutado;
    //cout << "ingrese nota PC!:" << endl;
    //cin>> notapc1;
    //cout<< "ingrese puntos:"<< endl;
    //cin>> puntos;
    //cout <<"nota final"<< notapc1+puntos<<endl;
    //return 0;

//}
//void pedir_nota (float &a,float &b){
  //  cin>> a;
    //cin>> b;
//}