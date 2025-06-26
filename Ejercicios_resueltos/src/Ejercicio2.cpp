#include <iostream>
using namespace std;
int main(){
    try {
        throw 10;
    }
        catch (char *excp) {
        cout << "Capturado " << excp;
    }
    catch (...) {
        cout << "Excepción por defecto\n";
    }
    return 0;
}