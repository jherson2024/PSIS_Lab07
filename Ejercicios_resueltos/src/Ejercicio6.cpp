#include <iostream>
using namespace std;
// Aqui se especifica la exception que la función
// envia
void fun(int *ptr, int x) throw (int *, int){ // Especificación de la excepción dinámica
    if (ptr == NULL)
        throw ptr;
    if (x == 0)
        throw x;
    /* Alguna funcionalidad */
}
int main(){
    try {
        fun(NULL, 0);
    }
    catch(...) {
        cout << "Capturando la excepción desde fun()" << endl;
    }
    return 0;
}
//La escpecificación de la excepción dinámica está obsoleta desde C++11 y eliminada en C++17. Razones:
//Poco útil en la práctica: no protegía realmente contra otras excepciones.
//Complicaba compiladores y mantenimiento.
