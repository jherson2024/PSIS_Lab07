#include <iostream>
using namespace std;
class Test {
    public:
        Test() { cout << "Constructor de la prueba " << endl; }
        ~Test() { cout << "Destructor de la prueba " << endl; }
    };
int main(){
    try {
        Test t1;
        throw 10;
    }
    catch (int i) {
        cout << "Capturado " << i << endl;
    }
}