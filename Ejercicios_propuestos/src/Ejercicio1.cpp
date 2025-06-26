#include <iostream>
using namespace::std;
double dividir(double numerador,double denominador){
    if(denominador==0){
        throw "No se puede dividir por cero";
    }
    return numerador/denominador;
}
int main(){
    double a,b;
    cout<<"Numerador: ";
    cin>>a;
    cout<<"Denominador: ";
    cin>>b;
    try{
        double resultado=dividir(a,b);
        cout<<"El resultado de la división es: "<<resultado<<endl;
    }
    catch(const char*e){
        cout<<e<<endl;
    }
    return 0;
}
