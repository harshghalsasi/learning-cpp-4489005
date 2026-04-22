#pragma once        // needed to tell compiler to compile this .h file only once.(even if it is included in multiple implementation/source code files)

#ifndef COW_H      //alternate to pragma once, if pragma is not supported by compiler
#define COW_H       //macro saying define cow.h if not already defined.so,even if the .h file is used in multiple impl files, it would be compiled only once. For 2nd time, it would skip #ifndef condition.


#include<string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow(std::string name_i, int age_i, cow_purpose purpose_i);
    std::string get_name() const;
    int get_age() const;
    cow_purpose get_purpose() const;
    void set_age(int new_age);

private:
    std::string name;
    int age;
    cow_purpose purpose;
};

#endif     //COW_H

//since it is a header file, only declarations are kept. Rest stuff (implementation/ execution related) is moved to cow.cpp