// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float flt = -3.436;
    int32_t sgn;
    uint32_t unint;

    sgn = flt;                 //This is implicit typecasting. Type is changed as per the target variable's data type

    unint = sgn;                //This is also implicit but impractical casting since signed no. cannot be assigned to uint type. so printing this gives 2's complement of 32 bit representation of -3.
    
    std::cout << flt << std::endl;
    std::cout << sgn << std::endl;
    std::cout <<unint  << std::endl;
    std :: cout << (int32_t)unint << std::endl;    //This is explicit typecasting as we are explicitely adding (int32_t) in fromt of the variable


    std::cout << std::endl << std::endl;
    return (0);
}
