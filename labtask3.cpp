#include <iostream>
using namespace std;
bool isperfectsquare(int n)
{
    int i = n;
    int perfectsquare = i;
    for (int i = 1; i*i <= n; i++)
    {
        if (i*i == n)
        {
        return true;
    }
    }
    return false;
}

int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    cout << "is perfect square = " << isperfectsquare(n) << endl;
    return 0;  
}