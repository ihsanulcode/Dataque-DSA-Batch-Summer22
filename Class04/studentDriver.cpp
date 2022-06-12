#include "Student.cpp"
#include <iostream>
using namespace std;

int main()
{
    Student s1("Tawhid Talal", 2023664, 4.0);
    s1.studentAbout();
    Student s2("Ahnaf T. Unmesh", 1923664, 3.0);
    s2.studentAbout();
    Student s3("Ihsanul Haque Asif", 2013664);
    s3.studentAbout();
    Student s4("Sheikh Rifat", 2033664, 3.5);
    s4.studentAbout();
    Student s5("Mumtahena Islam", 2215656, 2.5);
    s5.studentAbout();
}