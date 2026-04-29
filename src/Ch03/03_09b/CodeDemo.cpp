// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

//HG: Vectors are like arrays, but their size can be defined dynamically. The size can be added or reduced anytime. Memory is managed automatically(we don't explicitely need to). Supports all datatypes, so it is a generic container class. Part of std library, so inbuilt Fns are supported.

#include <vector>           //std library for vector, needed to use inbuilt Fns
#include <iostream>
#include <string>

int main(){
    std:: vector<int> primes;      //declaration of a vector. Since it is a template, need to include datatype in <>. Template enables programmer to define a Fn/class w/o specific datatype, to write a generic and reusable code.
   // A vector is empty by-default, i.e initial size is zero.

    std::cout << primes.size() << std::endl;     //inbuilt size() Fn of vector

    primes.push_back(1);        //adding elements in vector. Vector has 2 ends-Front and Back. But inserting elements is possible only at back(Fn=push_back) as vector guarantees consecutive storage of elements in the memory and we don't need to change the allocations of existing once while adding new element to the vector at back.

    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(4);

    std::cout << primes[1] << std::endl;     //vector elements can be accessed similar to array elements, using [index]

    primes[0] = 100;
    std::cout << primes[0] << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
