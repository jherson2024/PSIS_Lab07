#include <iostream>
using namespace std;
int main(){
    int numero;
    cout<<"Numero entero: ";
    cin>>numero;
    if(cin.fail()){
        cout<<"Entrada no válida, no se ingresó un número"<<endl;
    }
    return 0;
}