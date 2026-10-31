#include <iostream>
using namespace std;
int main()
{
    int num;
    int countzero = 0;
    cout << "enter a number:";
    cin >> num;

    while (num <= 0)
    {
        if( num == 0)
        {
        countzero++;
        }
    }
    cin >> num;
    cout << "enter count of non zero digit " << countzero << endl;
    return 0;
}
