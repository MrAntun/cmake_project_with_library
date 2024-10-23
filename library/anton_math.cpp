#include "anton_math.h"

int anton_math::add(int a, int b) {
    return a + b;
}

int anton_math::subtract(int a, int b) {
    return a - b;
}

// (Windows MinGW)
// In library folder run: cmake -S . -B .\build\ -G "MinGW Makefiles"
// then in builder folder run: mingw32-make.exe
