#include <iostream>
using namespace std;
int squareroot(int n)
{int squareroot = 1;
    int i = 0;
    for(int i = 1; i*i <= n; i++)
    {
        if(i*i == n)
        {
            squareroot = i;
            return squareroot;
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    cout << "sqaure root = " << squareroot(n) << endl;
    return 0;
}