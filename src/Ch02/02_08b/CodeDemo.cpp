// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define ARRAYLENGTH 4

int main(){
//    int age[4];                 //Array declrn of size 4 and type int

const size_t ARRAYLENGTH = 4;         //difference betn macro and const- need to define data type and semicolon, assignemt operator. size_t is an unsigned integer type defined in <cstddef> (and other headers) that can store the size of the largest possible object on the target platform

int age [ARRAYLENGTH];            //Using Macro/Const to define array lengh

    age[2] = 3;                 //Adding array elements by index
    age[1] = 0;
    age[3] = 5;
    age[0] = 6;

    std::cout << age[0] << std::endl;           //printing the array
    std::cout << age[1] << std::endl;           //printing the array
    std::cout << age[2] << std::endl;           //printing the array
    std::cout << age[3] << std::endl;           //printing the array

    std::cout << std::endl << std::endl;

    float temp[] = {2.4, 5.243546, 9.0123};    //Another declrn type, all at once

    std::cout << "Temp array 1st element: " << temp[0] << std::endl;
    std::cout << "Temp array 2nd element: " << temp[1] << std::endl;
    std::cout << "Temp array 3rd element: " << temp[2] << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
