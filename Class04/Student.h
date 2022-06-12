#include <iostream>
using namespace std;

class Student
{
private:
    // data fields
    string name;
    int id;
    double cgpa;

public:
    Student();
    Student(string, int, double);
    Student(string, int); // overloaded constructor
    void studentAbout();
};
