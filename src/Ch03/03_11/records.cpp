// Write your implementation code here

#include "records.h"

Student::Student(int i_id, std::string i_name){      //constructor
    id = i_id;
    name = i_name;
}

int Student::get_id(){
    return id;
}
std::string Student::get_name(){
    return name;
}


Course::Course(int i_id, std::string i_name, int i_credits){  //constructor
    id = i_id;
    name = i_name;
    credits = i_credits;
};       

int Course::get_id(){
    return id;
}

std::string Course::get_name(){
    return name;
}

int Course::get_credits(){
    return credits;
}


Grade::Grade(int i_id, int i_course_id, char i_grade){     //constructor
    id = i_id;
    course_id = i_course_id;
    grade = i_grade;
};       

int Grade::get_id(){
    return id;
}

int Grade::get_course_id(){
    return course_id;
}

char Grade::get_grade(){
    return grade;
}