#include <iostream>
#include <cmath>
using namespace std;
double squareroot(double n)
{
    double result = 1;
    double i = 0;
    for (int i = 1; i*i <= n; i++)
    {
        if (i*i == n)
        {
        result = i;
        return result;
        }
    }
    return 0;
}

int main()
{
    double n;
    cout << "enter a number:";
    cin >> n;
    cout << "square root = " << sqrt(n) << endl;
    return 0;
}