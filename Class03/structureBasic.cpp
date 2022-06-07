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
    student s1;
    cout << "Student 1." << endl;
    cout << "Enter name: ";
    getline(cin, s1.name);
    cout << "Enter Id: ";
    cin >> s1.id;
    cout << "Enter Cgpa: ";
    cin >> s1.cgpa;

    // output
    cout << "\n--- Student Info ---" << endl;
    cout << "Student 1." << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Id: " << s1.id << endl;
    cout << "Cgpa: " << s1.cgpa << endl;
}