#include <iostream>
using namespace std;
int main(){
    try { 
        try {
            throw 20;
        }
        catch (int n) {
            cout << "Manejado parcialmente " <<endl;
            throw; // Relanzando una excepción
        }
    }
    catch (int n) {
        cout << "Manejando el resto " <<endl;
    }
    return 0;
}