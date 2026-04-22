// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

//NOT A FUNCTIONAL CODE; ONLY FOR CONCEPTS UNDERSTADNING. COntinuation in 03_03b.
// Concepts: Class, Constructor, getter functions

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

};

int main(){         //main fn here is as per the structures code. For class code, check in 03_03b
    car my_car();
    my_car.model_year = 2010;
    my_car.colour = "Red";
    my_car.type = car_type::sedan;

    std::cout << "my car is of type " << (int)my_car.type << " of colour " << my_car.colour << " from " << my_car.model_year << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
