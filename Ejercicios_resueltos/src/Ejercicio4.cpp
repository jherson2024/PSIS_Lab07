#include <iostream>
using namespace std;
int main(){
    try {
        throw 'a';
    }
    catch (int x) {
        cout << "Capturado";
    }
    return 0;
}