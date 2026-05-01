// Learning C++ 
// Exercise 04_01
// If Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    int a = 922;
    char b ='q';

    if (a > 1000)          //if can be w/o else part. {} are not necessary if there is only 1 stmt in if body.
        std::cout << "warning! a is above 1000" << std::endl;


    if (a % 2 == 0) {
        std::cout <<"The number is even" << std::endl;
    }
    else {
        std::cout <<"The number is odd" << std::endl;
    }


    if(b=='a' && b=='e' && b=='i' && b=='o' && b=='u'){
        std::cout <<"The character is a vowel" << std::endl;
    }
    else
        std::cout <<"The character is not a vowel" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
