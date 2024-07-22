// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>
#define CAPACITY 5000
#define DEBUG

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;

#ifdef DEBUG //the following is included or excluded from the output based on if we define DEBUG before or not
    std::cout << "[About to perform the addition]" <<std:: endl;
#endif
    large = large + small;
    std::cout << "The large integer is " << large << std::endl;

    
    std::cout << std::endl << std::endl;
    return (0);
}
