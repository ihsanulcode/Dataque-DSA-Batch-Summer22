#include <iostream>
using namespace std;

struct student
{
    string name;
    int id;
    float cgpa;
};

int main()
{
    student s;

    // syntax for pointer
    // dataType pointerVariable = address;
    student *p = &s;

    // int a = 5;
    // int *pp = &a;

    cout << "Student 1." << endl;
    cout << "Enter name: ";
    getline(cin, (*p).name);
    cout << "Enter Id: ";
    cin >> (*p).id;
    cout << "Enter Cgpa: ";
    cin >> (*p).cgpa;

    // output
    cout << "\n--- Student Info ---" << endl;
    cout << "Student 1." << endl;
    cout << "Name: " << (*p).name << endl;
    cout << "Id: " << (*p).id << endl;
    cout << "Cgpa: " << (*p).cgpa << endl;
}