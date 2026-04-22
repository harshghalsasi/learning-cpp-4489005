// Learning C++ 
// Exercise 03_03
// Using Classes, by Eduardo Corpeño 

//Concepts: Use of constructor, object, getter fns in main(). Defining setter functions

#include <iostream>
#include <string>

enum class car_type{hatchback, sedan, SUV};

//struct car{                    //syntax for class is same as struct. Difference is that by-default the class elements are private. we can explicitely define private/public elements in a class
class car{
//public:                      //can add 'public:' to make required class elements public and thus accessible inside 'main',but not reccommended as it beats oops concepts
private:
    std::string colour;
    int model_year;
    car_type type;

public:
    car(std::string i_colour, int i_model_year, car_type i_type){   //This is constructor, used to initialize an object with class's data. It is implemented when an object is created and it assignes the obj data to class data types. Name is same as the class name, but no return type to be specified
        colour = i_colour;
        model_year = i_model_year;
        type = i_type;
    }


    std::string getColour() const{        //These are getter functions, to access/read the private data of class. 'const' prevents programmer to modify any data in the function. Useful as getter fns are not supposed to modify anything
        return colour;
    }

    int getModel_year() const{
        return model_year;
    }

    car_type getCar_type() const{
        return type;
    }

    void setColour(std::string new_colour) {    //setter fn, to set values of the private-defined data. return type=void as no return is expected. pass only that data which needs to be replaced/updated
        colour = new_colour;
    }
};

int main(){
    car my_car("Red", 2010, car_type::sedan);       //object my_car declared using constructor 'car' as a function call,by passing the arguments. This makes below 3 assignments from 'struct' code unnecessary:
   
 //   my_car.model_year = 2010;
 //   my_car.colour = "Red";
 //   my_car.type = car_type::sedan;

    my_car.setColour("Grey");       //calling setter function to set colour

    std::cout << "my car is of type " << (int)my_car.getCar_type() << " of colour " << my_car.getColour() << " from " << my_car.getModel_year() << std::endl;
//using the getter functions from class to get/read/print the required data elements of the object initialized with the constructor of the same class.

//    std::cout << "trying to print directly w/o getter fn" << my_car.model_year;  //--> can't access directly as these are defined as 'private'. need to bring them in public. Which proves the need of getter functions in public. Data can always be kept protected by defining it as 'private' and for access-only, relevant functions can be defined in public section of the class.

    std::cout << std::endl << std::endl;
    return (0);
}
