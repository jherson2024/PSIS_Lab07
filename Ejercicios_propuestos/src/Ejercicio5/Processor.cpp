#include "Processor.h"
#include "ProcessorException.h"
#include <sstream>

int Processor::process(const std::string& data) {
    std::istringstream stream(data);
    int sum = 0, value;

    while (stream >> value) {
        sum += value;
    }

    if (stream.fail() && !stream.eof()) {
        throw ProcessorException("Error al procesar los datos: formato no válido.");
    }

    return sum;
}