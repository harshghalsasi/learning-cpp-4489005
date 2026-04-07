// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>     //std library for taking inputs eg. from keyborad and giving o/p eg: on screen (print)

int main() {        //program exec starts from main() and main has Int return type
    std::cout << "Trial print statement";      //:: indicates object cout(character out) is the operator from std library. :: is scope-resolution operator, << is insertion operator. stmt after << gets assigned to cout
    std::cout << std::endl;         //endl is used to end current line/ start new line for next code. cout is needed as we are 'writing' a new line

    return(0);          //returning 0 means there are no errors
}