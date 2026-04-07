// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a=10, b=5;      //Global var declaration. stored in data segment of memory, removed frm memory after program ends

int main(){
    a = 15;         //local var, overwrites global 'a' in local scope. stored in stack segment of memory(temporary), mem freed after function execution is done
    
    bool flag= true;

    std::cout << "value in b is: " << b << std::endl;  // global var is accessible everywhere
    
    std::cout << "value of a is: " << a << std::endl;    //global val overwritted with local
    
    std::cout << "flag is: " << flag << std::endl;

    std::cout << "b-a= " << b-a;

    std::cout << std::endl;
    return (0);
}
