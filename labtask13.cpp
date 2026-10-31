#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int n ;
    cout << "enter item prices:";
    cin >> n;
while (n>=0)
{
sum += n;
cout << "eenter next price:";
cin >> n;
} 
cout << "total sum of all items: " << sum << endl;
return 0;
}