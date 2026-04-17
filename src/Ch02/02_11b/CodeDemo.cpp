// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int temp_cels = 37;
    
//  std::cout << "temp in fahrenheit is:" << (9/5 *temp_cels + 32);
// In this, since 9/5 returns divident (=1), result is not as expected(=98.6). So, need to typecast either 9 or 5 as float/double

    std::cout << "temp in fahrenheit is:" << (9/5.0 *temp_cels + 32);
    std::cout << std::endl << std::endl;

// Another example: denoting integer and fractional parts of a float separately

    float weight = 10.99;

    std::cout << "actual number is: " << weight << std::endl;
    std::cout << "integer part is: " << int(weight) << std::endl;    //typecasting to int to get integer part
    std::cout << "fractional part is: " << (weight-int(weight))*100 << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
