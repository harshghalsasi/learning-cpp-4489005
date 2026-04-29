// Learning C++ 
// Challenge 03_11
// Create some classes, by Eduardo Corpeño 

#include <iostream>
#include "records.h"

int main(){
    Student First(01, "Arb");
    Student Second(02, "Rarb");
    Student Third(03, "Warb");

    Course Basic_Maths(101, "Basic Maths", 30);
    Course Algebra(201, "Algebra", 20);
    Course Geometry(301, "Geometry", 10);

    Grade Top(01, 101, 'A');
    Grade Medium(01, 101, 'B');
    Grade Bottom(01, 101, 'C');

    std::cout << "Student named " << First.get_name() << " has grade " << Medium.get_grade() << " in course " << Geometry.get_name() << " with credits " << Geometry.get_credits() << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
