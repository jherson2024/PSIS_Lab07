#ifndef DISPLAY_EXCEPTION_H
#define DISPLAY_EXCEPTION_H

#include "OutputException.h"

class DisplayException : public OutputException {
public:
    explicit DisplayException(const std::string& msg) : OutputException(msg) {}
};

#endif
