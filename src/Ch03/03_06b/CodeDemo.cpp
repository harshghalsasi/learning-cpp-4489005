// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    int a = 37;
    int *ptr;       //int here specifies the datatype of var to which ptr is pointing (i.e datatype of a in this case. * is in-direction operator. refers to the data of memory address to which ptr is pointing)

    ptr = &a;       //assigning address of a to the ptr. when read ptr, it will give address of a

    std::cout << "Data of a is: " << a << std::endl;
    std::cout <<  "Address of a is: " << &a << std::endl;
    // & is address-of operator, returns addr of mentioned variable
    std::cout << "Data of ptr is(i.e addrs stored at ptr is): " << ptr << std::endl;
    // ptr itself is a var stored at another mem location and it stores addr of a
    std::cout << "Address of ptr is: " << &ptr << std::endl;
    std::cout << "Data of a, accessed thru ptr is: " << *ptr << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
