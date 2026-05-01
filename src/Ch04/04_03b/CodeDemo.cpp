// Learning C++ 
// Exercise 04_03
// While Loops, by Eduardo Corpeño 

//HG: two types of the while loop- 1.while, 2. do-while
//while loop is used when there is no clarity on the no. of iterations to be performed

#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers = {23, 45, 65, 75, 87};

    std::vector<int>::iterator ptr = numbers.begin();        //iterator is from the std vector lib, that's why its type is std::vector<int>. int as it will be poiting to the vector elements which are int(remember! iterator acts as a ptr). ptr iterator points to the beginning of the vector
    
 // auto ptr = numbers.begin();        //one of the usecase where auto can be used since datatype of ptr is tooo long. auto assumes datatype based on the definition. This line is an option to line 13

    while (ptr != numbers.end())
    {
        std::cout << *ptr << std::endl;          //print the value pointed by the iterator
        ptr = next(ptr, 1);         //next is the Fn of iterator from std lib, used to increment
    }
    
    //same program with the do-while loop:
    //do-while is used when there is guarantee that the prog will run at-least for 1 iteration. in do-while, the first iteration runs w/o checking the condition. condn is checked after 1st iteration.

    int i=0;
    do{
       std::cout << numbers[i];     //here, vector is accessed by its index(the normal way, w/o iterator)
       i++;
    }while (i < numbers.size());

    std::cout << std::endl << std::endl;
    return (0);
}
