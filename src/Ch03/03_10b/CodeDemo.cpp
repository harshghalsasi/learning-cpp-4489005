// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

//HG: Objects, constructors can be used with vectors. Vectors have 'iterator' which is useful to iterate thru its elements. There are Fns assocated with this iterators and it behaves like a ptr(pointing to vector indices) which means the '->'/'member of ptr' operator can be used over the iterator in a vector


#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){
    std::vector<cow> cattle;    // datatype of cattle vector is 'cow', which is our class from cow.h

    cow my_cow = cow("Firstie", 9, cow_purpose::dairy); //invoking constructor to create an object
    cow my_cow1 = cow("Secondie", 6, cow_purpose::pet); 

    cow *my_cow2;       //ptr which points to class cow
    my_cow2 = new cow("Thirdie", 3, cow_purpose::pet);  //Using ptr, creating an obejct with dynamic mem alloc, by invoking constructor
    
    cattle.push_back(my_cow);       //push all cow objects to the vector
    cattle.push_back(my_cow1);
    cattle.push_back(*my_cow2);

    std::cout << "Name of first cow is: " << cattle.begin()->get_name() << std::endl;           //.begin() is an iterator, returning 1st element of the vector. get_name() is still needed as vector is storing the whole object created from cow class and not only the name of the object

    std::cout << "Name of last cow is: " << (cattle.end()-1)->get_name() << std::endl;      //,end() points to end(empty space after the last element in vector). so we need to -1.

    std::cout << "Name of cow at index 1 is: " << (cattle.begin()+1)->get_name() << std::endl;      //begin()+1 = 2nd element

    std::cout << "Name of cow at index 1 using normal print syntax of the vector: " << cattle[1].get_name() << std::endl;       //.get_name() is still needed since cattle datatype is 'cow' class

    std::cout << std::endl << std::endl;
    return (0);
}
