#include <iostream>
using namespace::std;
double dividir(double numerador,double denominador){
    try{
        if(denominador==0){
        throw "No se puede dividir por cero";
    }
    return numerador/denominador;
    }
    catch(const char*e){
        cout<<"Excepción capturada en la función dividir: "<<e<<endl;
        throw;
    }
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
        cout<<"Excepción capturada en main: "<<e<<endl;
    }
    return 0;
}