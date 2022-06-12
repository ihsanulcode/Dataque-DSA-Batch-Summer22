#include "Student.h"
#include <iostream>
using namespace std;

Student::Student()
{
    this->name = "";
    this->id = 0;
    this->cgpa = 0.0;
}

Student::Student(string name, int id, double cgpa)
{
    this->name = name;
    this->id = id;
    this->cgpa = cgpa;
}

Student::Student(string name, int id)
{
    this->name = name;
    this->id = id;
    this->cgpa = 0.0;
}

void Student::studentAbout()
{
    cout << "Name: " << this->name << endl;
    cout << "ID: " << this->id << endl;
    cout << "CGPA: " << this->cgpa << endl;
    cout << endl;
}