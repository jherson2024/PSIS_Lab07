#include <iostream>
using namespace std;
void Programa();
int main() {
    try {
        // Programa
        Programa();
    }
    catch(int x) {
        cout << "Excepción relanzada capturada." << endl;
        cout << "error: " << x << endl;
    }
    catch(...) {
        cout << "Excepción inesperada." << endl;
    }
    cin.get();
    return 0;
}
void Programa() {
    try {
    // Operaciones...
    throw 10;
    }
    catch(int x) {
    // Relanzar, no nos interesa manejar aquí
    throw;
    }
}