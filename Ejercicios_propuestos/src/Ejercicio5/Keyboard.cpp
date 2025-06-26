#include "Keyboard.h"
#include "KeyboardException.h"
#include <fstream>
#include <sstream>

Keyboard::Keyboard(const std::string& path) : filePath(path) {}

std::string Keyboard::readInput() {
    std::ifstream file(filePath);
    if (!file.is_open()) {
        throw KeyboardException("No se pudo abrir el archivo: " + filePath);
    }

    std::ostringstream content;
    std::string line;
    while (std::getline(file, line)) {
        content << line << '\n';
    }

    file.close();
    return content.str();
}
