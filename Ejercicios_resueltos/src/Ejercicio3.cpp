#include <iostream>
using namespace std;
int main(){
    try {
        throw 'a';
    }
    catch (int x) {
        cout << "capturado " << x;
    }
    catch (...) {
        cout << "Excepción por defecto\n";
    }
    return 0;
}