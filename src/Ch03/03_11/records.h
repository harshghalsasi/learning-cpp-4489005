#pragma once

#include <string>

class Student{
public:
    Student(int i_id, std::string i_name);      //constructor declaration
    int get_id();
    std::string get_name();

private:
    int id;
    std::string name;
};

class Course{
public:
    Course(int i_id, std::string i_name, int i_credits);
    int get_id();
    std::string get_name();
    int get_credits();

private:
    int id;
    std::string name;
    int credits;
};

class Grade{
public:
    Grade(int i_id, int i_course_id, char i_grade);
    int get_id();
    int get_course_id();
    char get_grade();

private:
    int id;
    int course_id;
    char grade;
};