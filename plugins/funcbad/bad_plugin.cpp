#include <iostream>

extern "C" __declspec(dllexport)
void someOtherFunction() {
    std::cout << "Not a plugin" << std::endl;
}