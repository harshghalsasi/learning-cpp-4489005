// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño


#include <iostream>             //#include includes complete code file. since iostream is part of std library, it doesn't need extensions like '.h'
//#include <string>

#include <cstdint>             //std C file containing fixed-length Int type definitions. Some such C flies are made available in std C++ library

#define CAPACITY 1000        //#define defines constant value. These are also called as Macros. 
#define Debug               // condition for #ifdef

int main(){
    int16_t a = CAPACITY;
    int16_t b = 200;
    int16_t c = b + a;

#ifdef Debug                   //#ifdef is used to include/exclude part of code conditionally. condition is defined in front of it
    std::cout << "Debug mode is in progress" << std::endl;  //code is greyed-out  and thus not included, when ifdef condition is false
#endif                         //to end the #ifdef

std::cout << "c = " << c;

    std::cout << std::endl << std::endl;
    return (0);
}


// Use of #define(Macros) is discouraged sometimes as there is no context and compiler doesn't enforce data type, syntax correctness. So instead, CONST is used

// Macros have no scope, so even if defined inside main(), it doesn't become local. Compiler also doesn't enforce syntax, data type in declaration of Macros , use of Macros to define constants may lead to syntax errors