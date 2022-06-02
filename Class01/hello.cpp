#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    // cout << "I'm learning DSA" << endl;

    // data types
    int n = 2;
    double d = 3.59;
    float f = 2.5;
    char ch = 'a';
    string s = "I love C++";
    bool isokay = false;

    // user input
    int x;
    cout << "Enter a number: ";
    cin >> x;
    // cout << "You have entered: " << x << endl;
    int y;
    cout << "Enter another number: ";
    cin >> y;

    int sum = x + y;
    cout << "Summation: " << sum << endl;

    // operators: + , - , * , /, %

    int a = 1;
    // a++; //2
    // a--; //1

    a += 2; // a = a+2 = 1+2 = 3
    a -= 2; // a = a-2 = 3-2 = 1
    a *= 2;
    a /= 2;

    int pp = 2;
    int qq = 3;
    cout << (pp == qq);

    // not equal !=
    //  pp >= qq
    //  pp <= qq

    cout << min(4, 3);
    cout << sqrt(25);
    cout << round(2.6);
    cout << log(2);

    if(pp > qq){
        //true
    }else if(pp < qq){
        //true
    }
    else{
        //false
    }

    return 0;
}