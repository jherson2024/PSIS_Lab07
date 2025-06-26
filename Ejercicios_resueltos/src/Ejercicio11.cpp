#include <iostream>
using namespace std;
int main() {
    try {
        try {
            try {
                throw 'x'; // valor de tipo char
            }
            catch(int i) {}
            catch(float k) {}
        }
        catch(unsigned int x) {}
    }
    catch(char c) {
        cout << "El valor de c es: " << c << endl;
    }
    return 0;
}