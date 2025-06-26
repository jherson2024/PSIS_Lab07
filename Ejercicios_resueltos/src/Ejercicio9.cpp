#include <iostream>
using namespace std;
int main() {
    int *x;
    int y = 100000000;
    try {
        x = new int[y];
        x[0] = 10;
        cout << "Puntero: " << (void *) x << endl;
        delete[] x;
    }
    catch(std::bad_alloc&) {
        cout << "Memoria insuficiente" << endl;
    }
    return 0;
} 