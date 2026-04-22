// Learning C++ 
// Exercise 03_07
// Using Objects with Pointers, by Eduardo Corpeño 

//HG: 1 of the Pointers' use is dynamic memory allocation. Real-world apps use dynamic Mem alloc. Till now we have allocated mem to objects statically, but can allocate it dynamically using ptrs and release once te use is done:

#include <iostream>
#include <string>
#include "cow.h"

int main(){
    //cow my_cow("Hildy", 7, cow_purpose::pet);  //previously defined static object

    cow *my_cow;    // define ptr which points to data type cow class

    my_cow = new cow("Gertie", 3, cow_purpose::dairy);  //dynamically define and assign object to the ptr. constructor is called to define obj and 'new' operator is used to dynamically define the obj using ptr. Now ptr points to the address of the instance of class cow.

    //std::cout << my_cow.get_name() << " is a type-" << (int) my_cow.get_purpose() << " cow." << std::endl;  
    
    //'.' operator is used to denote that the data/Fn is a member of class of the object. Since we are defining ptr to obj now, '.' can't be used. Instead '->'(member of ptr) is used which denotes that the ptr points to the class member.

    std::cout << my_cow -> get_name() << " is a type-" << (int) my_cow -> get_purpose() << " cow." << std::endl;

    std::cout << my_cow -> get_name() << " is " << my_cow -> get_age() << " years old." << std::endl;
    
    delete my_cow;          // dynamically remove the object to free up the memory. 'delete' operator calls the destructor from class(useful to free dyna allocated memory) and does the opposite of 'new' operator

    std::cout << std::endl << std::endl;
    return (0);
}
