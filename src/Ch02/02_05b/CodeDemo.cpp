// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    auto a = 10;        //auto keyword is used when type of var is not defined in var declaration. Var initialization is must in this case

    auto b = 345678931224;       //long type w/o declaring it as 'long'
    auto c = 10.5f;             //float
    auto d = 10.5;              //double (if no. is not succeeded by f, by default it is 'double')
    
    auto e = 'q';                //char
    auto f = "Sentence";         // string
    auto g = true;              //boolean


    std::cout << "data type of var a is: " << typeid(a).name();         //typeid function returns data type of the entered var. name() gives the actual type name

    std::cout << "data type of var b is: " << typeid(b).name() << std::endl;
    std::cout << "data type of var c is: " << typeid(c).name() << std::endl;
    std::cout << "data type of var d is: " << typeid(d).name() << std::endl;
    std::cout << "data type of var e is: " << typeid(e).name() << std::endl;
    std::cout << "data type of var f is: " << typeid(f).name() << std::endl;    //it returns PKc(ptr-to-const character, which is str only)
    std::cout << "data type of var g is: " << typeid(g).name() << std::endl;


    std::cout << std::endl << std::endl;
    return (0);
}
