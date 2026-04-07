// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "enter your name: " << std::flush;      //flush makes sure that cout stmt is completely sent on display b4 waiting for user reply
    std::cin >> str;
    std::cout << "Nice to meet you:" << str;

    std::cout << std::endl << std::endl;
    return (0);
}
