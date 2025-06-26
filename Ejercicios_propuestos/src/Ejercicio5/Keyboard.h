#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <string>

class Keyboard {
private:
    std::string filePath;

public:
    explicit Keyboard(const std::string& path);
    std::string readInput();
};

#endif
