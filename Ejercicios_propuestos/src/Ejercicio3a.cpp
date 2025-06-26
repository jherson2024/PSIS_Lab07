#include <iostream>
using namespace std;
int main(){
    try{
        int*arreglo=new int[10000000000];
        delete[]arreglo;
    }catch(...){
        cout<<"No se pudo asignar memoria"<<endl;
    }
    return 0;
}