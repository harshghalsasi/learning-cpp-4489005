// Learning C++ 
// Exercise 04_04
// For Loops, by Eduardo Corpeño 

//HG: For loop is used when the no. of iterations to be performed is known

#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers = {12, 25, 31, 47, 58};
    float average;

    average = 0.0f;

    for(int i=0; i<=numbers.size(); i++){
        average +=numbers[i];
    }
    average /= numbers.size();
    
    std::cout << "the average is: " << average;


    //There is 1 more type of for loop which can be used only for the vector with smaller datatype elements like int. This is called 'The range-based for loop', introduced in c++ 11. Not useful for vector with larger datatypes like objects since the variable copies entire element of the vector in the for loop, each time, every element. This reduced the program efficiency:

    average = 0.0f;

    for(auto x : numbers){          //meaning for every x in numbers. x will take the datatype of numbers element and will copy entire element into the loop for every iteration
        average += x;
    }
    average /= numbers.size();
    
    std::cout << "the average is: " << average;

    std::cout << std::endl << std::endl;
    return (0);
}
