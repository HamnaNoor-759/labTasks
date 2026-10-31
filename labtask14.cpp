#include <iostream>
using namespace std;
int main()
{
    int num;
    int positivecount = 0;
    cout << " entr non zero numbers:";
    cin >> num;
    
    while ( num != 0)
    {
    if(num > 0)
        {
            positivecount++;
        }
    cin >> num;
    }
        cout << "count of positive numbers entered: " << positivecount << endl;
        return 0;
}
