#ifndef KEYBOARD_EXCEPTION_H
#define KEYBOARD_EXCEPTION_H

#include "InputException.h"

class KeyboardException : public InputException {
public:
    explicit KeyboardException(const std::string& msg) : InputException(msg) {}
};

#endif
