// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 


//String datatype in C++ is not specifically defined. Two ways to use-> 1.array of chars- compatible with C code, 2.String class- useful as there are multiple predefined functions inside

#include <iostream>
#include <cstring>           //string class for string as array of chars
#include <string>          //string class from c++ with pre-def functions

int main(){
    // defining string as array of chars:
    const int arr_len = 25;
    char str_array[arr_len] = "Hey guys, what's up?";
    char str_array1[15] = "How you doin?";
    
    std::strncat(str_array, str_array1, arr_len);        //concatenate. strncat(dest_str,source_str,size of new string)

    std::cout << str_array;

    std::cout << std::endl << std::endl;


    //defining string using c++ string class
    std::string str1 = "hello,";
    std::string str2 = "good morning!";

    std::cout << str1 + str2;           //concatenate

    std::cout << std::endl << std::endl;
    return (0);
}
