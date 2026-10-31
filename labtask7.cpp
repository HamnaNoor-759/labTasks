#include <iostream>
using namespace std;
int smallestPrimeFactor(int n)
{
    int smallest = 1;
    
    for(int i = 1; i <= n; i++)
    {
        if ( n % i == 0 && n % n == 0)
        {
        smallest = i;
        return smallest;
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    cout << "smallest prime factor = " << smallestPrimeFactor;
    return 0;
}
