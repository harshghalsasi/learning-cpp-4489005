// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class car_type{hatchback, sedan, SUV};

struct car          //syntax for a structure. It can contain hetero data types
{
    /* data */
    car_type type;          //no initialization,only type assignment
    int model_year;
    std::string colour;
};

int main(){
    car mycar;          // defining object of type struct car
    mycar.type = car_type::sedan;
    mycar.model_year = 2010;
    mycar.colour = "Red";

    std::cout << "my car is of type " << (int)mycar.type << " of colour " << mycar.colour << " from " << mycar.model_year << std::endl;     //again, enum class doesn't allow to print its element names. Need to print their index instead with 'Int' casting

    std::cout << std::endl << std::endl;
    return (0);
}
