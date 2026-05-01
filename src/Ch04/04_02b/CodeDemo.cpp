// Learning C++ 
// Exercise 04_02
// Switch Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    float operand_1, operand_2, result;
    char operation;

    std::cout << "Enter first number: " << std::flush;  //flush is used to print the o/p immediately, w/o waiting for the whole prog to finish. Generally, all the o/p are given at a time from o/p buffer on the screen when a prog is run. But for longer prog.s, eg to print 1000 no.s 1-by-1, the initial dispaly o/p message are printed immediately(flushed out from the buffer) and then the further operation is performed. In this eg, it is not necessary
    std::cin >> operand_1;
    std::cout << "Enter second number: " << std::flush;
    std::cin >> operand_2;

    std::cout << "Enter operation which you want to perform [+,-,*,/]: ";
    std::cin >> operation;

    // switch goes here
    switch(operation){
        case '*':
            result = operand_1 * operand_2;
        //  std::cout << "result is: " << result << std::endl;  //individual result printing not needed, can take out of switch stmt
            break;          //break ensures that the ctrl goes directly outside the switch after this case(useful when selected case is + and program need not go thru other cases)

        case '+':
            result = operand_1 + operand_2;
            break;

        case '/':
            result = operand_1 / operand_2;
            break;

        case '-':
            result = operand_1 - operand_2;
            break;
    }

    std::cout << "The result is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
