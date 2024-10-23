#include "../../library/anton_math.h"
#include <iostream>

main(){
    int a = 1;
    int b = 2;
    int result = anton_math::add(a, b);
    std::cout << "the result of " << a << " + " << b << " is " << result << " (result from library)" << std::endl;
}

// (Windows MinGW)
// In application folder run: cmake -S . -B .\build\ -G "MinGW Makefiles"
// then in builder folder run: mingw32-make.exe
