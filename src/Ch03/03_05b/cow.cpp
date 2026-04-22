#include "cow.h"            //user-defined files to be included in "". Only std library files to be included in <>

//since declarations are now part of cow.h header file, need to resolve the scope using scope-resolution operator -> cow::_ before each function. If not done, will throw error on variables/Fn names

cow::cow(std::string name_i, int age_i, cow_purpose purpose_i){
    name = name_i;
    age = age_i;
    purpose = purpose_i;
}
std::string cow::get_name() const{
    return name;
}
int cow::get_age() const{
    return age;
}
cow_purpose cow::get_purpose() const{
    return purpose;
}
void cow::set_age(int new_age){
    age = new_age;
}