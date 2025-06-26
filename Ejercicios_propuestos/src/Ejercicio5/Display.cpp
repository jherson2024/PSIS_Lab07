#include "Display.h"
#include "DisplayException.h"  // en lugar de OutputException
#include <iostream>

void Display::show(int result) {
    if (result < 0) {
        throw DisplayException("Error en el dispositivo de salida: resultado negativo no permitido.");
    }
    std::cout << "Resultado procesado: " << result <<"\n"<< std::endl;
}
