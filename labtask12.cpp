#include <iostream>
using namespace std;
int main()
{ 
    int n;
    int count = 0;
    cout << "enter a number:";
    cin >> n;
while( n >= 0 )
{
    count++;
    cout << "next number:";
    cin >> n;
}
cout << "total positive numbers entered:" << count << endl;
return 0;
}