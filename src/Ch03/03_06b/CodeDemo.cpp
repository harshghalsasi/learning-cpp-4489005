// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

// Pointers are not only used to store address but also to change the data at stored address


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

    // pointer to a pointer
    int x = 6;
    int *p;         //pointer declaration
    p = &x;

    int **q;        //need to declare q as **(pointer to a ptr)
    q = &p;

    int ***r = &q;      //r is ptr to q, whch is a ptr to p, which is ptr to x

    std::cout << "value at x: " << *p << std::endl;
    std::cout << "value at p: " << *q << std::endl;
    std::cout << "value at x, accessed via q: " << **q << std::endl;
    std::cout << "value at x, accessed via r: " << ***r << std::endl;

    ***r = 12;
    std::cout << "value at x, changed via r: " << x << std::endl;

    **q = *p + 2;
    std::cout << "value at x, changed via q: " << **q << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
