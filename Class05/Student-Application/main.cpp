#include "dynarr.cpp"
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    fflush(stdin);

    dynarr<string> name(n);
    dynarr<int> id(n);
    dynarr<double> cgpa(n);

    cout << "\nEnter students data: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << (i + 1) << "." << endl;
        string temp1;
        cout << "Enter name: ";
        getline(cin, temp1);
        int temp2;
        cout << "Enter Id: ";
        cin >> temp2;
        fflush(stdin);
        double temp3;
        cout << "Enter cgpa: ";
        cin >> temp3;
        fflush(stdin);
        cout << endl;

        name.setValue(i, temp1);
        id.setValue(i, temp2);
        cgpa.setValue(i, temp3);
    }

    int index = 0;
    double max = cgpa.getValue(0);

    cout << "\nStudent Data:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << (i + 1) << "." << endl;
        cout << "Name: " << name.getValue(i) << endl;
        cout << "Id: " << id.getValue(i) << endl;
        cout << "Cgpa: " << cgpa.getValue(i) << endl;
        cout << endl;

        if (cgpa.getValue(i) > max)
        {
            max = cgpa.getValue(i);
            index = i;
        }
    }

    cout << "\nTopper:" << endl;
    cout << "Name: " << name.getValue(index) << endl;
    cout << "Id: " << id.getValue(index) << endl;
    cout << "Cgpa: " << cgpa.getValue(index) << endl;
}