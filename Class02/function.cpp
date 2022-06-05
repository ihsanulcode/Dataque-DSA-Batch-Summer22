#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int ans = a + b;
    return ans;
}

int main()
{
    int a = 2;
    int b = 3;
    int ans = sum(a, b);
    cout << "Summation: " << ans << endl;
}