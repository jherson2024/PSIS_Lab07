#include <iostream>
#include <string>
#include "Keyboard.h"
#include "Processor.h"
#include "Display.h"
#include "KeyboardException.h"
#include "ProcessorException.h"
#include "DisplayException.h"
#include "ComputerException.h"
int main() {
    while (true) {
        try {
            std::string nombreArchivo;
            std::cout << "Introduce la ruta del archivo: ";
            std::getline(std::cin, nombreArchivo);
            if (nombreArchivo == "salir" || nombreArchivo == "SALIR") {
                break;
            }
            std::string ruta = "prueba/" + nombreArchivo;
            Keyboard teclado(ruta);
            std::string datos = teclado.readInput();
            Processor cpu;
            int resultado = cpu.process(datos);
            Display pantalla;
            pantalla.show(resultado);
        } catch (const KeyboardException& e) {
            std::cerr << "[Error de Teclado] " << e.what() << std::endl;
            std::cerr << "Ruta inválida. Intente nuevamente.\n\n";
        } catch (const ProcessorException& e) {
            std::cerr << "[Error de Procesamiento] " << e.what() << std::endl;
            std::cerr << "Datos inválidos. Intente con otro archivo.\n\n";
        } catch (const DisplayException& e) {
            std::cerr << "[Error de Display] " << e.what() << std::endl;
            std::cerr << "No se pudo mostrar el resultado. Intente con otro archivo.\n\n";
        } catch (const ComputerException& e) {
            std::cerr << "[Error General del Computador] " << e.what() << std::endl;
            std::cerr << "Error crítico. Terminando el programa.\n";
            break;
        }
    }
    return 0;
}
